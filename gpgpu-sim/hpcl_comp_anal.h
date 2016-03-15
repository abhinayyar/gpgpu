/*
 * hpcl_comp_anal.h
 *
 *  Created on: Mar 8, 2016
 *      Author: mumichang
 */

#ifndef GPGPU_SIM_HPCL_COMP_ANAL_H_
#define GPGPU_SIM_HPCL_COMP_ANAL_H_

#include "hpcl_stat.h"
#include <iostream>

class hpcl_comp_anal
{
public:
  hpcl_comp_anal ();
  virtual
  ~hpcl_comp_anal ();

//added by kh(030816)
public:
  enum sample_type {
    GLOBAL_TABLE_HIT_NO = 0,
    GLOBAL_TABLE_MISS_NO,
  };

  void create();
  void add_sample(enum sample_type type, double val);
  hpcl_stat* m_comp_table_hit_no;
  hpcl_stat* m_comp_table_miss_no;
  hpcl_stat* m_ovr_avg_comp_table_hit_rate;

  void display(std::ostream & os = std::cout) const;
  void update_overall_stat();
  void clear();
  ///

};

#endif /* GPGPU_SIM_HPCL_COMP_ANAL_H_ */
