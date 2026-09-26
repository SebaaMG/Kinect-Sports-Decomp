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
extern int fn_828A02B8();
extern int fn_828A22D0();
extern int fn_828A44B8();
extern int fn_828A7080();
extern int fn_828A7138();
extern int fn_828A80B0();
extern unsigned int iStack_c4;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_4c;
extern unsigned int uStack_b0;
extern unsigned int uStack_b4;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;


void fn_828A8160(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int aiStack_d0 [2];
  undefined4 *puStack_c8;
  int iStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 *puStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 *puStack_ac;
  undefined1 *puStack_a8;
  undefined4 *puStack_a4;
  undefined1 auStack_a0 [4];
  undefined1 auStack_9c [80];
  undefined4 uStack_4c;
  undefined1 *puStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  uint uStack_38;
  
  puStack_c8 = (undefined4 *)0x0;
  iStack_c4 = 0;
  RtlEnterCriticalSection(param_1 + 3);
  if ((param_1[1] != 0) && (*(int *)(param_1[1] + 4) == 1)) {
    aiStack_d0[0] = param_1[2];
    if ((int *)aiStack_d0[0] == (int *)**(undefined4 **)*param_1) {
      aiStack_d0[0] = *(int *)**(undefined4 **)*param_1;
    }
    fn_828A7138(param_1,0,aiStack_d0,1);
  }
  fn_828A22D0(&puStack_c8,param_1);
  RtlLeaveCriticalSection(param_1 + 3);
  puVar2 = puStack_c8;
  puStack_48 = auStack_9c;
  auStack_a0[0] = 0;
  uStack_4c = 10;
  puStack_b8 = auStack_a0;
  uStack_44 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  puVar1 = (undefined4 *)*puStack_c8;
  uStack_c0 = *puVar1;
  uStack_bc = uStack_c0;
  uStack_b4 = uStack_c0;
  uStack_40 = param_2;
  fn_828A02B8(&uStack_c0);
  puStack_a8 = auStack_a0;
  puStack_ac = *(undefined4 **)*puVar2;
  uStack_b0 = *puStack_ac;
  puStack_a4 = puStack_ac;
  fn_828A02B8(&uStack_b0);
  fn_828A7080(puVar2[2],CONCAT44(uStack_b0,puStack_ac),CONCAT44(puStack_a8,puStack_a4),
                CONCAT44(uStack_c0,uStack_bc),CONCAT44(puStack_b8,uStack_b4));
  if (uStack_3c < uStack_38) {
    fn_828A80B0(param_1,puVar1);
  }
  fn_828A44B8(auStack_a0);
  if (iStack_c4 != 0) {
    fn_8289DF30();
  }
  return;
}

