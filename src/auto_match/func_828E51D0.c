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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int *auStack_9c;
extern unsigned int *auStack_a0;
extern int fn_8289DF30();
extern int fn_828A22D0();
extern int fn_828A44B8();
extern int fn_828A7138();
extern int fn_828A80B0();
extern int fn_828E4C40();
extern int fn_828E4FC8();
extern unsigned int iStack_bc;
extern unsigned int iStack_c4;
extern unsigned int iStack_cc;
extern unsigned int iStack_d0;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_4c;
extern unsigned int uStack_b0;


void fn_828E51D0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int iStack_d0;
  int iStack_cc;
  undefined1 *puStack_c8;
  int iStack_c4;
  undefined4 *puStack_c0;
  int iStack_bc;
  undefined4 uStack_b0;
  undefined4 *puStack_ac;
  undefined1 *puStack_a8;
  undefined4 *puStack_a4;
  undefined1 auStack_a0 [4];
  undefined1 auStack_9c [80];
  undefined4 uStack_4c;
  undefined1 *puStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  uint uStack_38;
  uint uStack_34;
  
  puStack_c0 = (undefined4 *)0x0;
  iStack_bc = 0;
  RtlEnterCriticalSection(param_1 + 3);
  if ((param_1[1] != 0) && (*(int *)(param_1[1] + 4) == 1)) {
    iStack_d0 = param_1[2];
    if ((int *)iStack_d0 == (int *)**(undefined4 **)*param_1) {
      iStack_d0 = *(int *)**(undefined4 **)*param_1;
    }
    fn_828A7138(param_1,0,&iStack_d0,1);
  }
  fn_828A22D0(&puStack_c0,param_1);
  RtlLeaveCriticalSection(param_1 + 3);
  puVar2 = puStack_c0;
  uStack_40 = CONCAT44(param_2,param_3);
  puStack_48 = auStack_9c;
  uStack_4c = 10;
  puStack_c8 = auStack_a0;
  auStack_a0[0] = 0;
  uStack_44 = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  piVar1 = (int *)*puStack_c0;
  iStack_d0 = *piVar1;
  iStack_cc = iStack_d0;
  iStack_c4 = iStack_d0;
  fn_828E4C40(&iStack_d0);
  puStack_a8 = auStack_a0;
  puStack_ac = *(undefined4 **)*puVar2;
  uStack_b0 = *puStack_ac;
  puStack_a4 = puStack_ac;
  fn_828E4C40(&uStack_b0);
  fn_828E4FC8(puVar2[2],CONCAT44(uStack_b0,puStack_ac),CONCAT44(puStack_a8,puStack_a4),
                CONCAT44(iStack_d0,iStack_cc),CONCAT44(puStack_c8,iStack_c4));
  if (uStack_38 < uStack_34) {
    fn_828A80B0(param_1,piVar1);
  }
  fn_828A44B8(auStack_a0);
  if (iStack_bc != 0) {
    fn_8289DF30();
  }
  return;
}

