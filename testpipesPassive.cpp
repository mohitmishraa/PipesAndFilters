/**
 * testpipesPassive.cpp
 *
 * Passive Filters Implementation.
 */

#include<bits/stdc++.h>
#include "pipesandfilters.h"
#include <iostream>
#include <pthread.h>
#include<unistd.h>

using namespace std;

Filter* filter_1 = new Filter();
Filter* filter_2 = new Filter();
Filter* filter_3 = new Filter();
Filter* filter_4 = new Filter();
Filter* filter_5 = new Filter();
Filter* filter_6 = new Filter();
Filter* filter_7 = new Filter();
Filter* filter_8 = new Filter();
// Filter* filter_9 = new Filter();


void *  activateFilter1() {
	Filter* filter1 = (Filter*)filter_1;
	DataSink* filterSink1;
	filterSink1 = filter1->getDataSink();

		//sleep(1);
		filterSink1->notify(1);
}

void *  activateFilter2() {
	Filter* filter2 = (Filter*)filter_2;
	DataSink* filterSink2;
	filterSink2 = filter2->getDataSink();

		//sleep(1);
		filterSink2->notify(2);
}

void *  activateFilter3() {
	Filter* filter3 = (Filter*)filter_3;
	DataSink* filterSink3;
	filterSink3 = filter3->getDataSink();

		//sleep(1);
		filterSink3->notify(3);
}

void *  activateFilter4() {
	Filter* filter4 = (Filter*)filter_4;
	DataSink* filterSink4;
	filterSink4 = filter4->getDataSink();

		//sleep(1);
		filterSink4->notify(4);
}

void *  activateFilter5() {
	Filter* filter5 = (Filter*)filter_5;
	DataSink* filterSink5;
	filterSink5 = filter5->getDataSink();

		//sleep(1);
		filterSink5->notify(5);
}

void *  activateFilter6() {
	Filter* filter6 = (Filter*)filter_6;
	DataSink* filterSink6;
	filterSink6 = filter6->getDataSink();

		//sleep(1);
		filterSink6->notify(6);
}

void *  activateFilter7() {
	Filter* filter7 = (Filter*)filter_7;
	DataSink* filterSink7;
	filterSink7 = filter7->getDataSink();

		//sleep(1);
		filterSink7->notify(7);
}

void *  activateFilter8() {
	Filter* filter8 = (Filter*)filter_8;
	DataSink* filterSink8;
	filterSink8 = filter8->getDataSink();

		//sleep(1);
		filterSink8->notify(8);
}

// void *  activateFilter9() {
// 	Filter* filter9 = (Filter*)filter_9;
// 	DataSink* filterSink9;
// 	filterSink9 = filter9->getDataSink();

// 		//sleep(1);
// 		filterSink9->notify(0);
// }

void *  activateSource(void* _source) {
	DataSource* source = (DataSource*)_source;
	Packet packet1 ;
	int i = 0;
	while(1) {
		usleep(1);
		packet1.setSeqNo(i++);
		source -> add( packet1 );
		//source -> add( packet2 );
		activateFilter1();
		activateFilter2();
		activateFilter3();
		activateFilter4();
		activateFilter5();
		activateFilter6();
		activateFilter7();
		activateFilter8();
		//activateFilter9();
	}
}



void *  activateSink(void* _sink) {
	DataSink* sink = (DataSink*)_sink;
	while(1) {
		//usleep(1);
		
		int seq = sink->notify(0);
		cout << "Sink: Size " << sink -> size() << " seqno " << seq << endl;
		if(sink -> size() == 100000)
			break;
	}

	pthread_exit(0);
}

int main()
{

	/**
	 * Instantiate our pattern classes.
	 */

	DataSink* sink = new DataSink();
	DataSource* source = new DataSource();
	Pipe* pipe = new Pipe();

	/**
	 * Configure them.
	 */

	source -> setOutput( pipe );
	//pipe -> setObserver( sink );
	//sink -> setInput( pipe );

	/**
	 * Plug a couple of packets into the source, and they
	 * will migrate across to the sink.
	 */

	//Packet packet1;
	//packet1.setSeqNo(1);
	//packet2.setSeqNo(3);
	//int s;
	 //source -> add( packet1 );
	 //source -> add(packet2);
	 

	//s = sink -> notify();
	//s = sink -> notify();

	//int i=0;
	//while(i != 30)
	//{
	/*	packet1.setSeqNo(i++);
		source -> add(packet1);

		s = sink -> notify();
		cout << "Sink: " << sink -> size()<< "seqno" << s << endl;
	}
	/**
	 * Print out the number of packets in the sink.
	 */

	//cout << "Sink: " << sink -> size()<< endl;

	/**
	 * Add a filter with a source and sink.
	 */

	DataSink* filterSink1 = new DataSink();
	DataSource* filterSource1 = new DataSource();
	Pipe* pipe1 = new Pipe();

	DataSink* filterSink2 = new DataSink();
	DataSource* filterSource2 = new DataSource();
	Pipe* pipe2 = new Pipe();

	DataSink* filterSink3 = new DataSink();
	DataSource* filterSource3 = new DataSource();
	Pipe* pipe3 = new Pipe();

	DataSink* filterSink4 = new DataSink();
	DataSource* filterSource4 = new DataSource();
	Pipe* pipe4 = new Pipe();

	DataSink* filterSink5 = new DataSink();
	DataSource* filterSource5 = new DataSource();
	Pipe* pipe5 = new Pipe();

	DataSink* filterSink6 = new DataSink();
	DataSource* filterSource6 = new DataSource();
	Pipe* pipe6 = new Pipe();

	DataSink* filterSink7 = new DataSink();
	DataSource* filterSource7 = new DataSource();
	Pipe* pipe7 = new Pipe();

	DataSink* filterSink8 = new DataSink();
	DataSource* filterSource8 = new DataSource();
	Pipe* pipe8 = new Pipe();

	// DataSink* filterSink9 = new DataSink();
	// DataSource* filterSource9 = new DataSource();
	// Pipe* pipe9 = new Pipe();

	/**
	 * Reconfigure all the objects for the pipeline.
	 * Our object graph should look like this:
	 *		source -> pipe -> filterSink -> filter -> filterSource -> pipe2 -> sink
	 * 
	 * NOTE: filterSink and filterSource and encapsulated inside filter.
	 */

	pipe -> setObserver( filterSink1 );
	filterSink1 -> setInput( pipe );
	filterSink1 -> setObserver( filter_1 );
	filter_1 -> setDataSink( filterSink1 );
	filter_1 -> setDataSource( filterSource1 );
	filterSource1 -> setOutput( pipe1 );

	pipe1 -> setObserver( filterSink2 );
	filterSink2 -> setInput( pipe1 );
	filterSink2 -> setObserver( filter_2 );
	filter_2 -> setDataSink( filterSink2 );
	filter_2 -> setDataSource( filterSource2 );
	filterSource2 -> setOutput( pipe2 );

	pipe2 -> setObserver( filterSink3 );
	filterSink3 -> setInput( pipe2 );
	filterSink3 -> setObserver( filter_3 );
	filter_3 -> setDataSink( filterSink3 );
	filter_3 -> setDataSource( filterSource3 );
	filterSource3 -> setOutput( pipe3 );

	pipe3 -> setObserver( filterSink4 );
	filterSink4 -> setInput( pipe3 );
	filterSink4 -> setObserver( filter_4 );
	filter_4 -> setDataSink( filterSink4 );
	filter_4 -> setDataSource( filterSource4 );
	filterSource4 -> setOutput( pipe4 );

	pipe4 -> setObserver( filterSink5 );
	filterSink5 -> setInput( pipe4 );
	filterSink5 -> setObserver( filter_5 );
	filter_5 -> setDataSink( filterSink5 );
	filter_5 -> setDataSource( filterSource5 );
	filterSource5 -> setOutput( pipe5 );

	pipe5 -> setObserver( filterSink6 );
	filterSink6 -> setInput( pipe5 );
	filterSink6 -> setObserver( filter_6 );
	filter_6 -> setDataSink( filterSink6 );
	filter_6 -> setDataSource( filterSource6 );
	filterSource6 -> setOutput( pipe6 );

	pipe6 -> setObserver( filterSink7 );
	filterSink7 -> setInput( pipe6 );
	filterSink7 -> setObserver( filter_7 );
	filter_7 -> setDataSink( filterSink7 );
	filter_7 -> setDataSource( filterSource7 );
	filterSource7 -> setOutput( pipe7 );

	pipe7 -> setObserver( filterSink8 );
	filterSink8 -> setInput( pipe7 );
	filterSink8 -> setObserver( filter_8 );
	filter_8 -> setDataSink( filterSink8 );
	filter_8 -> setDataSource( filterSource8 );
	filterSource8 -> setOutput( pipe8 );

	// pipe8 -> setObserver( filterSink9 );
	// filterSink9 -> setInput( pipe8 );
	// filterSink9 -> setObserver( filter_9 );
	// filter_9 -> setDataSink( filterSink9 );
	// filter_9 -> setDataSource( filterSource9 );
	// filterSource9 -> setOutput( pipe9 );

	pipe8 -> setObserver( sink );
	sink -> setInput( pipe8 );

	pthread_t sourceThread;
  	pthread_attr_t thread_attr1;
  	pthread_attr_init(&thread_attr1);
  	pthread_create(&sourceThread, &thread_attr1, activateSource, (void*)source);

	// pthread_t filterThread;
	// pthread_attr_t thread_attr3;
	// pthread_attr_init(&thread_attr3);
	// pthread_create(&filterThread, &thread_attr3, activateFilter, (void*)filter);
	
	pthread_t sinkThread;
  	pthread_attr_t thread_attr2;
  	pthread_attr_init(&thread_attr2);
  	pthread_create(&sinkThread, &thread_attr2, activateSink, (void*)sink);

	/*Packet packet1;
	int i=0;
	while(i != 10)
	{
		packet1.setSeqNo(i++);
		source -> add(packet1);

		
	}
	i=0;
	while(i!= 10)
	{
		filterSink -> notify();
		i++;
	}
	i=0;
	while(i!=10)
	{
		s = sink -> notify();
		cout << "Sink: " << sink -> size()<< "seqno" << s << endl;
		i++;
	}/
	/**
	 * Add two more packets.
	 */

	//source -> add( packet1 );
	//source -> add( packet2 );
	

	/**
	 * Print out the number of packets in the sink.
	 */
	sleep(100);
	//cout << "Sink: " << sink -> size() << endl;

	return 0;
};
