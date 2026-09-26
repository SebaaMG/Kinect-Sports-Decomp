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
extern unsigned int *auStack_50;
extern int fn_827D9410();
extern int fn_827E0658();
extern int fn_82811438();
extern int fn_8281C448();
extern int fn_82F65390();
extern int fn_82F66368();
extern int fn_82F6D460();
extern unsigned int lbl_83156AA0;


undefined8 fn_827D86F0(int param_1,undefined4 *param_2,ulonglong param_3)

{
  int iVar1;
  int iVar3;
  longlong lVar2;
  undefined4 *puVar4;
  undefined8 uVar5;
  int aiStack_60 [4];
  undefined1 auStack_50 [80];
  
  if ((param_3 & 0xffffffff) == 0) {
    return 0;
  }
  RtlEnterCriticalSection(param_1 + 0x3c8);
  fn_827E0658(aiStack_60,param_1 + 0x350,param_2);
  iVar1 = aiStack_60[0];
  if (aiStack_60[0] == *(int *)(param_1 + 0x354)) {
    aiStack_60[0] = 0;
    fn_82811438(auStack_50,aiStack_60,0x10);
    lVar2 = fn_82F6D460(param_3,0x400);
    uVar5 = (**(code **)(*(int *)lbl_83156AA0 + 0xc))(lbl_83156AA0,lVar2 + 1,auStack_50);
    lVar2 = fn_82F6D460(param_3,0x400);
    fn_82F66368(uVar5,lVar2 + 1,param_3,0x400);
    puVar4 = (undefined4 *)fn_827D9410(param_1 + 0x350,param_2);
    *puVar4 = (int)uVar5;
  }
  else {
    iVar3 = fn_82F65390(*(undefined4 *)(aiStack_60[0] + 0xc),param_3,0x400);
    if (iVar3 != 0) {
      fn_8281C448(0xffffffff8201ac8c,*param_2,*(undefined4 *)(iVar1 + 0xc),param_3);
      uVar5 = 0;
      goto LAB_827d87fc;
    }
  }
  uVar5 = 1;
LAB_827d87fc:
  RtlLeaveCriticalSection(param_1 + 0x3c8);
  return uVar5;
}

