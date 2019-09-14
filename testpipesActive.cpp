/**
 * testpipesActive.cpp
 *
 * Active Filters Implementation.
 */


#include<bits/stdc++.h>
#include "pipesandfilters.h"
#include <iostream>
#include <pthread.h>
#include<unistd.h>
using namespace std;

void *  activateSource(void* _source) {
	DataSource* source = (DataSource*)_source;
	Packet packet1 ;
	int i = 0;
	while(1) {
		usleep(1);
		packet1.setSeqNo(i++);
		source -> add( packet1 );
		//source -> add( packet2 );
	}
}

void *  activateFilter1(void* _filter) {
	Filter* filter = (Filter*)_filter;
	DataSink* filterSink;
	filterSink = filter->getDataSink();
	
	int oper=1;
	/*
	*A function for the filter to add 'oper' integer to the packet's sequence no.
	*
	*/
	while(1) {
		//sleep(1);

		filterSink->notify(oper);
	}
}

// void *  activateFilter2(void* _filter) {
// 	Filter* filter = (Filter*)_filter;
// 	DataSink* filterSink;
// 	filterSink = filter->getDataSink();
// 	int oper =2;
// 	/*
// 	*A function for the filter to add 'oper' integer to the packet's sequence no.
// 	*
// 	*/
// 	while(1) {
// 		//sleep(1);
// 		filterSink->notify(oper);
// 	}
// }

// void *  activateFilter3(void* _filter) {
// 	Filter* filter = (Filter*)_filter;
// 	DataSink* filterSink;
// 	filterSink = filter->getDataSink();
// 	int oper = 3;
// 	/*
// 	*A function for the filter to add 'oper' integer to the packet's sequence no.
// 	*
// 	*/
// 	while(1) {
// 		//sleep(1);
// 		filterSink->notify(oper);
// 	}
// }

// void *  activateFilter4(void* _filter) {
// 	Filter* filter = (Filter*)_filter;
// 	DataSink* filterSink;
// 	filterSink = filter->getDataSink();
// 	int oper = 4;
// 	/*
// 	*A function for the filter to add 'oper' integer to the packet's sequence no.
// 	*
// 	*/
// 	while(1) {
// 		//sleep(1);
// 		filterSink->notify(oper);
// 	}
// }

// void *  activateFilter5(void* _filter) {
// 	Filter* filter = (Filter*)_filter;
// 	DataSink* filterSink;
// 	filterSink = filter->getDataSink();
// 	int oper = 5;
// 	/*
// 	*A function for the filter to add 'oper' integer to the packet's sequence no.
// 	*
// 	*/
// 	while(1) {
// 		//sleep(1);
// 		filterSink->notify(oper);
// 	}
// }

// void *  activateFilter6(void* _filter) {
// 	Filter* filter = (Filter*)_filter;
// 	DataSink* filterSink;
// 	filterSink = filter->getDataSink();
// 	int oper = 6;
// 	/*
// 	*A function for the filter to add 'oper' integer to the packet's sequence no.
// 	*
// 	*/
// 	while(1) {
// 		//sleep(1);
// 		filterSink->notify(oper);
// 	}
// }

// void *  activateFilter7(void* _filter) {
// 	Filter* filter = (Filter*)_filter;
// 	DataSink* filterSink;
// 	filterSink = filter->getDataSink();
// 	int oper = 7;
// 	/*
// 	*A function for the filter to add 'oper' integer to the packet's sequence no.
// 	*
// 	*/
// 	while(1) {
// 		//sleep(1);
// 		filterSink->notify(oper);
// 	}
// }

// void *  activateFilter8(void* _filter) {
// 	Filter* filter = (Filter*)_filter;
// 	DataSink* filterSink;
// 	filterSink = filter->getDataSink();
// 	int oper = 8;
// 	/*
// 	*A function for the filter to add 'oper' integer to the packet's sequence no.
// 	*
// 	*/
// 	while(1) {
// 		//sleep(1);
// 		filterSink->notify(oper);
// 	}
// }

// void *  activateFilter9(void* _filter) {
// 	Filter* filter = (Filter*)_filter;
// 	DataSink* filterSink;
// 	filterSink = filter->getDataSink();
// 	int oper = 9;
// 	/*
// 	*A function for the filter to add 'oper' integer to the packet's sequence no.
// 	*
// 	*/
// 	while(1) {
// 		//sleep(1);
// 		filterSink->notify(oper);
// 	}
// }

// void *  activateFilter10(void* _filter) {
// 	Filter* filter = (Filter*)_filter;
// 	DataSink* filterSink;
// 	filterSink = filter->getDataSink();
// 	int oper = 10;
// 	/*
// 	*A function for the filter to add 'oper' integer to the packet's sequence no.
// 	*
// 	*/
// 	while(1) {
// 		//sleep(1);
// 		filterSink->notify(oper);
// 	}
// }

// void *  activateFilter11(void* _filter) {
// 	Filter* filter = (Filter*)_filter;
// 	DataSink* filterSink;
// 	filterSink = filter->getDataSink();
// 	int oper = 11;
// 	/*
// 	*A function for the filter to add 'oper' integer to the packet's sequence no.
// 	*
// 	*/
// 	while(1) {
// 		//sleep(1);
// 		filterSink->notify(oper);
// 	}
// }

// void *  activateFilter12(void* _filter) {
// 	Filter* filter = (Filter*)_filter;
// 	DataSink* filterSink;
// 	filterSink = filter->getDataSink();
// 	int oper = 12;
// 	/*
// 	*A function for the filter to add 'oper' integer to the packet's sequence no.
// 	*
// 	*/
// 	while(1) {
// 		//sleep(1);
// 		filterSink->notify(oper);
// 	}
// }

// void *  activateFilter13(void* _filter) {
// 	Filter* filter = (Filter*)_filter;
// 	DataSink* filterSink;
// 	filterSink = filter->getDataSink();
// 	int oper = 13;
// 	/*
// 	*A function for the filter to add 'oper' integer to the packet's sequence no.
// 	*
// 	*/
// 	while(1) {
// 		//sleep(1);
// 		filterSink->notify(oper);
// 	}
// }

// void *  activateFilter14(void* _filter) {
// 	Filter* filter = (Filter*)_filter;
// 	DataSink* filterSink;
// 	filterSink = filter->getDataSink();
// 	int oper = 14;
// 	/*
// 	*A function for the filter to add 'oper' integer to the packet's sequence no.
// 	*
// 	*/
// 	while(1) {
// 		//sleep(1);
// 		filterSink->notify(oper);
// 	}
// }

// void *  activateFilter15(void* _filter) {
// 	Filter* filter = (Filter*)_filter;
// 	DataSink* filterSink;
// 	filterSink = filter->getDataSink();
// 	int oper = 15;
// 	/*
// 	*A function for the filter to add 'oper' integer to the packet's sequence no.
// 	*
// 	*/
// 	while(1) {
// 		//sleep(1);
// 		filterSink->notify(oper);
// 	}
// }

// void *  activateFilter16(void* _filter) {
// 	Filter* filter = (Filter*)_filter;
// 	DataSink* filterSink;
// 	filterSink = filter->getDataSink();
// 	int oper = 16;
// 	/*
// 	*A function for the filter to add 'oper' integer to the packet's sequence no.
// 	*
// 	*/
// 	while(1) {
// 		//sleep(1);
// 		filterSink->notify(oper);
// 	}
// }



void *  activateSink(void* _sink) {
	DataSink* sink = (DataSink*)_sink;
	int i=0;
	while(1) {
		//usleep(1);
		int seq = sink->notify(i);
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
	Filter* filter1 = new Filter();
	Pipe* pipe1 = new Pipe();

	// DataSink* filterSink2 = new DataSink();
	// DataSource* filterSource2 = new DataSource();
	// Filter* filter2 = new Filter();
	// Pipe* pipe2 = new Pipe();

	// DataSink* filterSink3 = new DataSink();
	// DataSource* filterSource3 = new DataSource();
	// Filter* filter3 = new Filter();
	// Pipe* pipe3 = new Pipe();

	// DataSink* filterSink4 = new DataSink();
	// DataSource* filterSource4 = new DataSource();
	// Filter* filter4 = new Filter();
	// Pipe* pipe4 = new Pipe();

	// DataSink* filterSink5 = new DataSink();
	// DataSource* filterSource5 = new DataSource();
	// Filter* filter5 = new Filter();
	// Pipe* pipe5 = new Pipe();

	// DataSink* filterSink6 = new DataSink();
	// DataSource* filterSource6 = new DataSource();
	// Filter* filter6 = new Filter();
	// Pipe* pipe6 = new Pipe();

	// DataSink* filterSink7 = new DataSink();
	// DataSource* filterSource7 = new DataSource();
	// Filter* filter7 = new Filter();
	// Pipe* pipe7 = new Pipe();

	// DataSink* filterSink8 = new DataSink();
	// DataSource* filterSource8 = new DataSource();
	// Filter* filter8 = new Filter();
	// Pipe* pipe8 = new Pipe();

	// DataSink* filterSink9 = new DataSink();
	// DataSource* filterSource9 = new DataSource();
	// Filter* filter9 = new Filter();
	// Pipe* pipe9 = new Pipe();

	// DataSink* filterSink10 = new DataSink();
	// DataSource* filterSource10 = new DataSource();
	// Filter* filter10 = new Filter();
	// Pipe* pipe10 = new Pipe();

	// DataSink* filterSink11 = new DataSink();
	// DataSource* filterSource11 = new DataSource();
	// Filter* filter11 = new Filter();
	// Pipe* pipe11 = new Pipe();

	// DataSink* filterSink12 = new DataSink();
	// DataSource* filterSource12 = new DataSource();
	// Filter* filter12 = new Filter();
	// Pipe* pipe12 = new Pipe();

	// DataSink* filterSink13 = new DataSink();
	// DataSource* filterSource13 = new DataSource();
	// Filter* filter13 = new Filter();
	// Pipe* pipe13 = new Pipe();

	// DataSink* filterSink14 = new DataSink();
	// DataSource* filterSource14 = new DataSource();
	// Filter* filter14 = new Filter();
	// Pipe* pipe14 = new Pipe();

	// DataSink* filterSink15 = new DataSink();
	// DataSource* filterSource15 = new DataSource();
	// Filter* filter15 = new Filter();
	// Pipe* pipe15 = new Pipe();

	// DataSink* filterSink16 = new DataSink();
	// DataSource* filterSource16 = new DataSource();
	// Filter* filter16 = new Filter();
	// Pipe* pipe16 = new Pipe();

	/**
	 * Reconfigure all the objects for the pipeline.
	 * Our object graph should look like this:
	 *		source -> pipe -> filterSink1 -> filter -> filterSource -> pipeSink -> sink
	 * 
	 * NOTE: filterSink1 and filterSource and encapsulated inside filter.
	 */

	source -> setOutput( pipe );


	pipe -> setObserver( filterSink1 );
	filterSink1 -> setInput( pipe );
	filterSink1 -> setObserver( filter1 );
	filter1 -> setDataSink( filterSink1 );
	filter1 -> setDataSource( filterSource1 );
	filterSource1 -> setOutput( pipe1 );

	// pipe1 -> setObserver( filterSink2 );
	// filterSink2 -> setInput( pipe1 );
	// filterSink2 -> setObserver( filter2 );
	// filter2 -> setDataSink( filterSink2 );
	// filter2 -> setDataSource( filterSource2 );
	// filterSource2 -> setOutput( pipe2 );

	// pipe2 -> setObserver( filterSink3 );
	// filterSink3 -> setInput( pipe2 );
	// filterSink3 -> setObserver( filter3 );
	// filter3 -> setDataSink( filterSink3 );
	// filter3 -> setDataSource( filterSource3 );
	// filterSource3 -> setOutput( pipe3 );

	// pipe3 -> setObserver( filterSink4 );
	// filterSink4 -> setInput( pipe3 );
	// filterSink4 -> setObserver( filter4 );
	// filter4 -> setDataSink( filterSink4 );
	// filter4 -> setDataSource( filterSource4 );
	// filterSource4 -> setOutput( pipe4 );

	// pipe4 -> setObserver( filterSink5 );
	// filterSink5 -> setInput( pipe4 );
	// filterSink5 -> setObserver( filter5 );
	// filter5 -> setDataSink( filterSink5 );
	// filter5 -> setDataSource( filterSource5 );
	// filterSource5 -> setOutput( pipe5 );

	// pipe5 -> setObserver( filterSink6 );
	// filterSink6 -> setInput( pipe5 );
	// filterSink6 -> setObserver( filter6 );
	// filter6 -> setDataSink( filterSink6 );
	// filter6 -> setDataSource( filterSource6 );
	// filterSource6 -> setOutput( pipe6 );

	// pipe6 -> setObserver( filterSink7 );
	// filterSink7 -> setInput( pipe6 );
	// filterSink7 -> setObserver( filter7 );
	// filter7 -> setDataSink( filterSink7 );
	// filter7 -> setDataSource( filterSource7 );
	// filterSource7 -> setOutput( pipe7 );

	// pipe7 -> setObserver( filterSink8 );
	// filterSink8 -> setInput( pipe7 );
	// filterSink8 -> setObserver( filter8 );
	// filter8 -> setDataSink( filterSink8 );
	// filter8 -> setDataSource( filterSource8 );
	// filterSource8 -> setOutput( pipe8 );

	// pipe8 -> setObserver( filterSink9 );
	// filterSink9 -> setInput( pipe8 );
	// filterSink9 -> setObserver( filter9 );
	// filter9 -> setDataSink( filterSink9 );
	// filter9 -> setDataSource( filterSource9 );
	// filterSource9 -> setOutput( pipe9 );

	// pipe9 -> setObserver( filterSink10 );
	// filterSink10 -> setInput( pipe9 );
	// filterSink10 -> setObserver( filter10 );
	// filter10 -> setDataSink( filterSink10 );
	// filter10 -> setDataSource( filterSource10 );
	// filterSource10 -> setOutput( pipe10 );

	// pipe10 -> setObserver( filterSink11 );
	// filterSink11 -> setInput( pipe10 );
	// filterSink11 -> setObserver( filter11 );
	// filter11 -> setDataSink( filterSink11 );
	// filter11 -> setDataSource( filterSource11 );
	// filterSource11 -> setOutput( pipe11 );

	// pipe11 -> setObserver( filterSink12 );
	// filterSink12 -> setInput( pipe11 );
	// filterSink12 -> setObserver( filter12 );
	// filter12 -> setDataSink( filterSink12 );
	// filter12 -> setDataSource( filterSource12 );
	// filterSource12 -> setOutput( pipe12 );

	// pipe12 -> setObserver( filterSink13 );
	// filterSink13 -> setInput( pipe12 );
	// filterSink13 -> setObserver( filter13 );
	// filter13 -> setDataSink( filterSink13 );
	// filter13 -> setDataSource( filterSource13 );
	// filterSource13 -> setOutput( pipe13 );

	// pipe13 -> setObserver( filterSink14 );
	// filterSink14 -> setInput( pipe13 );
	// filterSink14 -> setObserver( filter14 );
	// filter14 -> setDataSink( filterSink14 );
	// filter14 -> setDataSource( filterSource14 );
	// filterSource14 -> setOutput( pipe14 );

	// pipe14 -> setObserver( filterSink15 );
	// filterSink15 -> setInput( pipe14 );
	// filterSink15 -> setObserver( filter15 );
	// filter15 -> setDataSink( filterSink15 );
	// filter15 -> setDataSource( filterSource15 );
	// filterSource15 -> setOutput( pipe15 );

	// pipe15 -> setObserver( filterSink16 );
	// filterSink16 -> setInput( pipe15 );
	// filterSink16 -> setObserver( filter16 );
	// filter16 -> setDataSink( filterSink16 );
	// filter16 -> setDataSource( filterSource16 );
	// filterSource16 -> setOutput( pipe16 );



	pipe1 -> setObserver( sink); 
	sink -> setInput(pipe1);





	pthread_t sourceThread;
  	pthread_attr_t thread_attr1;
  	pthread_attr_init(&thread_attr1);
  	pthread_create(&sourceThread, &thread_attr1, activateSource, (void*)source);

	pthread_t filterThread1;
	pthread_attr_t thread_attr3;
	pthread_attr_init(&thread_attr3);
	pthread_create(&filterThread1, &thread_attr3, activateFilter1, (void*)filter1);

	// pthread_t filterThread2;
	// pthread_attr_t thread_attr4;
	// pthread_attr_init(&thread_attr4);
	// pthread_create(&filterThread2, &thread_attr4, activateFilter2, (void*)filter2);

	// pthread_t filterThread3;
	// pthread_attr_t thread_attr5;
	// pthread_attr_init(&thread_attr5);
	// pthread_create(&filterThread3, &thread_attr5, activateFilter3, (void*)filter3);

	// pthread_t filterThread4;
	// pthread_attr_t thread_attr6;
	// pthread_attr_init(&thread_attr6);
	// pthread_create(&filterThread4, &thread_attr6, activateFilter4, (void*)filter4);

	// pthread_t filterThread5;
	// pthread_attr_t thread_attr7;
	// pthread_attr_init(&thread_attr7);
	// pthread_create(&filterThread5, &thread_attr7, activateFilter5, (void*)filter5);

	// pthread_t filterThread6;
	// pthread_attr_t thread_attr8;
	// pthread_attr_init(&thread_attr8);
	// pthread_create(&filterThread6, &thread_attr8, activateFilter6, (void*)filter6);

	// pthread_t filterThread7;
	// pthread_attr_t thread_attr9;
	// pthread_attr_init(&thread_attr9);
	// pthread_create(&filterThread7, &thread_attr9, activateFilter7, (void*)filter7);

	// pthread_t filterThread8;
	// pthread_attr_t thread_attr10;
	// pthread_attr_init(&thread_attr10);
	// pthread_create(&filterThread8, &thread_attr10, activateFilter8, (void*)filter8);

	// pthread_t filterThread9;
	// pthread_attr_t thread_attr11;
	// pthread_attr_init(&thread_attr11);
	// pthread_create(&filterThread9, &thread_attr11, activateFilter9, (void*)filter9);

	// pthread_t filterThread10;
	// pthread_attr_t thread_attr12;
	// pthread_attr_init(&thread_attr12);
	// pthread_create(&filterThread10, &thread_attr12, activateFilter10, (void*)filter10);

	// pthread_t filterThread11;
	// pthread_attr_t thread_attr13;
	// pthread_attr_init(&thread_attr13);
	// pthread_create(&filterThread11, &thread_attr13, activateFilter11, (void*)filter11);

	// pthread_t filterThread12;
	// pthread_attr_t thread_attr14;
	// pthread_attr_init(&thread_attr14);
	// pthread_create(&filterThread12, &thread_attr14, activateFilter12, (void*)filter12);

	// pthread_t filterThread13;
	// pthread_attr_t thread_attr15;
	// pthread_attr_init(&thread_attr15);
	// pthread_create(&filterThread13, &thread_attr13, activateFilter13, (void*)filter13);

	// pthread_t filterThread14;
	// pthread_attr_t thread_attr16;
	// pthread_attr_init(&thread_attr16);
	// pthread_create(&filterThread14, &thread_attr16, activateFilter14, (void*)filter14);

	// pthread_t filterThread15;
	// pthread_attr_t thread_attr17;
	// pthread_attr_init(&thread_attr17);
	// pthread_create(&filterThread15, &thread_attr17, activateFilter15, (void*)filter15);

	// pthread_t filterThread16;
	// pthread_attr_t thread_attr18;
	// pthread_attr_init(&thread_attr18);
	// pthread_create(&filterThread16, &thread_attr18, activateFilter16, (void*)filter16);

	
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
