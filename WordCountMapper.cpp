/*
 * WordCountMapper.cpp
 *
 *  Created on: 19-Sep-2016
 *      Author: tcs
 */

#include "WordCountMapper.h"

WordCountMapper::WordCountMapper() {
	void map( HadoopPipes::MapContext& context ) {

	    string line = context.getInputValue();


	    vector< string > words =
	      HadoopUtils::splitString( line, " " );


	    for ( unsigned int i=0; i < words.size(); i++ ) {
	      context.emit( words[i], HadoopUtils::toString( 1 ) );
	    }
	  }
}

WordCountMapper::~WordCountMapper() {
	// TODO Auto-generated destructor stub
}

