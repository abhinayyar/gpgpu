/*
 * hpcl_comp_config.h
 *
 *  Created on: Jan 4, 2016
 *      Author: mumichang
 */

#ifndef HPCL_COMP_CONFIG_H_
#define HPCL_COMP_CONFIG_H_

struct hpcl_comp_config {

  hpcl_comp_config()
  {
    hpcl_comp_en = 0;
    hpcl_comp_algo = 0;

    // added by hpclms
    hpcl_local_en = 0;
  }

  void init()
  {
  }

  void reg_options(class OptionParser * opp)
  {
    option_parser_register(opp, "-hpcl_comp_en", OPT_UINT32, &hpcl_comp_en,
			     "0: disable compression, 1: enable compression",
			     "0");

    option_parser_register(opp, "-hpcl_comp_algo", OPT_UINT32, &hpcl_comp_algo,
			   "0: global_table(private), 1: ",
			   "0");

    // added by hpclms

     option_parser_register(opp, "-hpcl_local_en", OPT_UINT32, &hpcl_local_en,"0: disable compression, 1: enable compression","0");



  }

  unsigned hpcl_comp_en;
  unsigned hpcl_local_en;
  unsigned hpcl_comp_algo;


};




#endif /* HPCL_DIRECT_LINK_CONFIG_H_ */
