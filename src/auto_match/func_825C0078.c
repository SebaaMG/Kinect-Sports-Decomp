typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
extern int fn_825BFD70();
extern unsigned int lbl_831D456C;
extern unsigned int lbl_831D4570;
extern unsigned int lbl_831D45E4;
extern unsigned int lbl_831D45E8;
extern unsigned int lbl_831D45EC;
extern unsigned int lbl_831D45F0;


undefined8 fn_825C0078(double param_1,int *param_2,int *param_3,ulonglong param_4,uint *param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  
  uVar1 = *param_5;
  if ((uVar1 & 2) != 0) {
    return 0;
  }
  dVar5 = (double)(float)param_5[1];
  if ((uVar1 & 8) == 0) {
    if ((uVar1 & 0x10) == 0) {
      if ((uVar1 & 0x10000) == 0) goto LAB_825c00e8;
      dVar6 = (double)lbl_831D45F0;
    }
    else {
      dVar6 = (double)lbl_831D45EC;
    }
  }
  else {
    if (dVar5 < (double)lbl_831D45E4) {
      return 0;
    }
    dVar6 = (double)lbl_831D45E8;
  }
  dVar5 = (double)(float)(dVar6 * dVar5);
LAB_825c00e8:
  if ((((param_1 <= dVar5) &&
       ((lbl_831D456C == 0 || ((ulonglong)param_5[2] != (param_4 & 0xffffffff))))) &&
      (((uVar1 & 1) == 0 || (param_2[0x14] == 0)))) &&
     (((iVar2 = fn_825BFD70(param_4,param_2,
                                  *(undefined4 *)
                                   ((((int)param_5 - param_3[5]) /
                                    (int)(uint)*(ushort *)(param_3 + 8)) *
                                    (uint)*(ushort *)(param_3 + 3) + *param_3 + 0xac)), -1 < iVar2
       && (*param_2 != 0)) && (lbl_831D4570 != 0)))) {
    iVar3 = 0;
    if (0 < param_2[0xb]) {
      iVar4 = 0;
      do {
        if (*(int *)(iVar4 + *param_2 + 0x24) == iVar2) {
          return 0;
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 0x40;
      } while (iVar3 < param_2[0xb]);
    }
  }
  return 0;
}

