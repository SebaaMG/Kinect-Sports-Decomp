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
extern unsigned int *auStack_120;
extern unsigned int *auStack_150;
extern unsigned int *auStack_a0;
extern int fn_82A8C620();
extern int fn_82A8D3A0();
extern int fn_82A8EA88();
extern unsigned int lbl_8201DCB8;
extern unsigned int uStack_134;
extern unsigned int uStack_140;
extern unsigned int uStack_144;
extern unsigned int uStack_148;


undefined8 fn_82A8EF40(int *param_1,int *param_2,longlong param_3)

{
  char cVar2;
  undefined8 uVar1;
  undefined4 *puVar3;
  undefined4 auStack_150 [2];
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_134;
  undefined1 auStack_120 [128];
  undefined1 auStack_a0 [160];
  
  puVar3 = (undefined4 *)*param_1;
  uStack_140 = 3;
  auStack_150[0] = lbl_8201DCB8;
  uStack_134 = lbl_8201DCB8;
  uStack_148 = lbl_8201DCB8;
  uStack_144 = lbl_8201DCB8;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = &uStack_148;
  }
  cVar2 = (**(code **)(*param_2 + 4))(param_2);
  if ((cVar2 == '\0') ||
     (cVar2 = (**(code **)(*param_2 + 0x10))(param_2,auStack_a0,0x76,auStack_150), cVar2 == '\0')) {
    uVar1 = 0;
  }
  else {
    fn_82A8D3A0(auStack_120,auStack_a0,0x76);
    fn_82A8C620(auStack_120,0,0x20,param_3);
    fn_82A8EA88(puVar3,param_3 + 4,auStack_120,0x20);
    uVar1 = 1;
  }
  return uVar1;
}

