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
extern int fn_82C06C18();
extern int fn_82C08290();
extern int fn_82C10F40();


void fn_82C08550(int *param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  int aiStack_30 [12];
  
  aiStack_30[0] = 0;
  if (param_3 == 0) {
    iVar1 = (**(code **)(*param_1 + 0xc))(*param_1,param_2,0);
    if (-1 < iVar1) {
      fn_82C06C18(param_1,param_2);
    }
  }
  else {
    fn_82C10F40(param_1[0x8e],param_2,aiStack_30);
    if ((((aiStack_30[0] == 0) || (*(int *)(aiStack_30[0] + 4) != 1)) &&
        (iVar1 = fn_82C08290(param_1,param_2,param_4), -1 < iVar1)) &&
       ((iVar1 = (**(code **)(*param_1 + 0xc))(*param_1,param_2,1), -1 < iVar1 &&
        (iVar1 = fn_82C10F40(param_1[0x8e],param_2,aiStack_30), -1 < iVar1)))) {
      *(undefined4 *)(aiStack_30[0] + 4) = 1;
    }
  }
  return;
}

