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
extern unsigned int *auStack_3c;
extern int fn_82CE2468();
extern int fn_82CE2888();
extern int fn_82CE3870();
extern int fn_82CE3978();
extern unsigned int iStack_40;


undefined8 fn_82CE3A28(int param_1,uint param_2,int param_3,byte *param_4,undefined4 *param_5)

{
  undefined8 uVar1;
  uint *puVar2;
  int iStack_40;
  uint auStack_3c [15];
  
  uVar1 = fn_82CE2468(param_3,param_4);
  if ((-1 < (int)uVar1) && ((*param_4 & 0x3f) != 0x3f)) {
    if ((*param_4 & 0x80) != 0) {
      uVar1 = fn_82CE3870(param_3,&iStack_40);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      uVar1 = fn_82CE2888(*(undefined4 *)(param_3 + 0x14),(((U64)(iStack_40) >> 0) & 0xFFFF),auStack_3c);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      if ((0x3f < (*param_4 & 0x3f)) || (3 < (param_2 & 3))) {
        return 0xffffffff80070057;
      }
      puVar2 = (uint *)((*param_4 & 0x3f) * 0x10 + param_1);
      if ((*puVar2 & 0x40000000) != 0) {
        return 0xffffffff80004005;
      }
      puVar2[1] = 0;
      *puVar2 = param_2 & 3 | 0x80000000;
      *(ulonglong *)(puVar2 + 2) = (ulonglong)auStack_3c[0];
    }
    uVar1 = fn_82CE3978(param_1,*param_4 & 0x3f,&iStack_40);
    if (-1 < (int)uVar1) {
      *param_5 = (int)*(undefined8 *)(iStack_40 + 8);
    }
  }
  return uVar1;
}

