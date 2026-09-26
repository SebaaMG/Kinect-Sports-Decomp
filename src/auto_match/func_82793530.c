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
extern unsigned int *auStack_60;
extern unsigned int *auStack_90;
extern unsigned int *auStack_c0;
extern int fn_8267BF50();
extern int fn_8267C4F0();
extern int fn_826FDED0();
extern int fn_826FDF58();
extern int fn_82726AB8();
extern int fn_8278CD58();
extern int fn_8278D688();
extern int fn_82791BD8();
extern int fn_82791CF0();
extern int fn_82791DF0();
extern unsigned int iStack_a4;
extern unsigned int iStack_b4;
extern unsigned int uStack_a0;


undefined8 fn_82793530(undefined8 param_1,longlong param_2,ulonglong param_3,ulonglong param_4)

{
  bool bVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_c0 [12];
  int iStack_b4;
  int iStack_a4;
  uint uStack_a0;
  undefined1 auStack_90 [48];
  undefined1 auStack_60 [96];
  
  fn_82791BD8(auStack_c0,param_2 + 0x10,param_2,param_3);
  if ((param_4 & 0xffffffff) < (param_3 & 0xffffffff)) {
    param_4 = param_3;
  }
  if ((int)param_4 == -1) {
    lVar5 = 0x7fffffff;
  }
  else {
    lVar5 = param_4 - param_3;
  }
  uVar2 = fn_8267BF50(param_2);
  fn_826FDED0(auStack_90,uVar2);
  iVar4 = 0;
  while ((0 < (int)lVar5 && (uStack_a0 < *(uint *)(iStack_a4 + 4)))) {
    iVar3 = fn_82791CF0(auStack_c0);
    if (*(int *)(iVar3 + 0xc) != 0) {
      bVar1 = iVar4 == 0;
      iVar4 = iVar4 + 1;
      if (bVar1) {
        fn_82726AB8(auStack_90);
      }
      else {
        uVar2 = fn_8278D688(auStack_60,*(int *)(iVar3 + 0xc),auStack_90);
        fn_82726AB8(auStack_90,uVar2);
        fn_826FDF58(auStack_60);
      }
    }
    lVar5 = lVar5 - (ulonglong)*(uint *)(iVar3 + 8);
    fn_82791DF0(auStack_c0);
  }
  fn_8278CD58(param_1,auStack_90,0);
  fn_826FDF58(auStack_90);
  if (iStack_b4 != 0) {
    fn_8267C4F0();
  }
  return param_1;
}

