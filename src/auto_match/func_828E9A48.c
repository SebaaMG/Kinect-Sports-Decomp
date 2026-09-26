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
extern unsigned int *auStack_24;
extern unsigned int *auStack_38;
extern int fn_828B5580();
extern int fn_828B55B0();
extern int fn_828B55F8();
extern int fn_828E6240();
extern int fn_828E6B10();
extern int fn_828E7FB0();
extern int fn_828E8EF8();
extern int fn_828E97F8();
extern unsigned int iStack_3c;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_40;


undefined4 fn_828E9A48(int param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined1 uStack_40;
  int iStack_3c;
  undefined1 auStack_38 [8];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined1 auStack_24 [20];
  
  (**(code **)(**(int **)(param_1 + 0x10) + 0x1c))(auStack_38);
  uStack_28 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x28);
  fn_828B5580(auStack_24,auStack_38);
  uVar2 = fn_828E8EF8();
  fn_828E6B10(&uStack_30,uVar2,&uStack_28);
  iStack_3c = 0;
  fn_828E6240(uStack_30,uStack_2c,&iStack_3c,uStack_40);
  if (iStack_3c == 0) {
    uVar1 = *(undefined4 *)(param_1 + 4);
    uVar2 = fn_828B55F8(auStack_38);
    puVar3 = (undefined4 *)fn_828E97F8(uVar1,uVar2);
  }
  else {
    uVar2 = fn_828E8EF8();
    puVar3 = (undefined4 *)fn_828E7FB0(uVar2,&uStack_28);
  }
  uVar1 = *puVar3;
  fn_828B55B0(auStack_24);
  fn_828B55B0(auStack_38);
  return uVar1;
}

