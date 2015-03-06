#ifndef _ASM_RISCV_TLB_H
#define _ASM_RISCV_TLB_H

#define tlb_start_vma(tlb, vma) do { } while (0)
#define tlb_end_vma(tlb, vma) do { } while (0)
#define __tlb_remove_tlb_entry(tlb, ptep, address) do { } while (0)

#include <asm-generic/tlb.h>

static inline void tlb_flush(struct mmu_gather *tlb)
{
	flush_tlb_mm(tlb->mm);
}

#endif /* _ASM_RISCV_TLB_H */
