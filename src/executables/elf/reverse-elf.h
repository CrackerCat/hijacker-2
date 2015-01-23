/*
 * reverse-elf.h
 *
 *  Created on: 24/lug/2014
 *      Author: davide
 */

#ifndef REVERSE_ELF_H_
#define REVERSE_ELF_H_

#include <instruction.h>
#include <monitor.h>

/**
 * Prior to call the <em>monitor</em> module who generates the reverse code, it is needed
 * to push the <em>insn_entry</em> structure used by the monitor into the current stack.
 *
 * @param func Pointer to the function to which the memwrite instruction belongs
 * @param target Pointer to the descriptor of the write MOV instruction to be instrumented
 * @param entry Pointer to the <em>insn_entry</em> structure needed by the monitor
 */
//void push_insn_entry (function *func, insn_info *target, insn_entry *entry);

/**
 * Retrieve from the instruction descriptor the information needed to fill up
 * the <em>insn_entry</em> structure.
 *
 * @param insn Pointer to the target instruction descriptor
 * @param Non-null pointer to the monitor structure to be filled
 */
//void get_memwrite_info (insn_info *insn, insn_entry *entry);


void prepare_monitor_call (function *func, insn_info *target, symbol *reference);

#endif /* REVERSE_ELF_H_ */
