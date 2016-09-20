/*
 * WordCountMapper.h
 *
 *  Created on: 19-Sep-2016
 *      Author: tcs
 */

#ifndef WORDCOUNTMAPPER_H_
#define WORDCOUNTMAPPER_H_

#include "hadoop/Pipes.hh"
#include "hadoop/StringUtils.hh"
#include "hadoop/TemplateFactory.hh"

class WordCountMapper : public HadoopPipes::Mapper {
	public:

	WordCountMapper(HadoopPipes::TaskContext& context );
	virtual ~WordCountMapper();
};

class WordCountReducer : public HadoopPipes::Reducer {
	public:
  // constructor: does nothing
		WordCountReducer(HadoopPipes::TaskContext& context) {
  }

#endif /* WORDCOUNTMAPPER_H_ */
