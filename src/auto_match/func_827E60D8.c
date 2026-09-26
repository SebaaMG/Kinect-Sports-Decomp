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
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern int fn_827D5070();
extern int fn_827D5078();
extern int fn_827D9DD8();
extern int fn_827DA588();
extern int fn_827E3810();
extern int fn_827E4430();
extern int fn_827E4440();
extern int fn_82811438();
extern unsigned int lbl_83156AA0;


undefined8 fn_827E60D8(int *param_1)

{
  int iVar3;
  undefined8 uVar1;
  longlong lVar2;
  int *piVar4;
  int iVar5;
  undefined4 auStack_40 [4];
  undefined1 auStack_30 [24];
  
  iVar3 = param_1[0xf] - param_1[0x12];
  iVar5 = param_1[0x13] + iVar3;
  param_1[0x13] = iVar5;
  if (iVar5 < param_1[0xf]) {
    uVar1 = 0;
  }
  else {
    if (0 < iVar3) {
      iVar3 = fn_827E4440();
      if (iVar3 == 0) {
        fn_827E4430(param_1);
        iVar3 = param_1[7];
        uVar1 = (**(code **)(*param_1 + 0x1c))(param_1);
        fn_827E3810(uVar1,iVar3);
      }
    }
    fn_827D9DD8(param_1[2]);
    lVar2 = fn_827D5070(param_1[5]);
    if (lVar2 != 0) {
      if (param_1[0x17] == 1) {
        auStack_40[0] = 3;
        fn_82811438(auStack_30,auStack_40,0x10);
        (**(code **)(*(int *)lbl_83156AA0 + 0x18))(lbl_83156AA0,lVar2,auStack_30);
      }
      else if (param_1[0x18] == 0) {
        piVar4 = (int *)fn_827DA588(param_1[8],param_1[0x15]);
        (**(code **)(*piVar4 + 0x14))(piVar4,lVar2);
      }
      fn_827D5078(param_1[5],0);
    }
    uVar1 = 1;
  }
  return uVar1;
}

