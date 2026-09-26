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
extern int fn_82902688();
extern int fn_82F6DFB0();


undefined8 fn_82904070(int param_1,int param_2,double *param_3)

{
  uint *puVar1;
  int iVar3;
  undefined8 uVar2;
  double dStack_30;
  double dStack_28;
  
  puVar1 = *(uint **)(*(int *)(*(int *)(param_1 + 8) + 0x14) + param_2 * 4);
  if ((*puVar1 & 0x80) == 0) {
    uVar2 = fn_82902688(param_1,param_2,&dStack_30);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
    if (dStack_30 != dStack_28) {
      return 0xffffffff80004005;
    }
    iVar3 = fn_82F6DFB0(dStack_30);
    if (iVar3 == 0) {
      return 0xffffffff80004005;
    }
    if (param_3 != (double *)0x0) {
      *param_3 = dStack_30;
    }
  }
  else {
    iVar3 = fn_82F6DFB0(*(undefined8 *)(puVar1 + 8));
    if (iVar3 == 0) {
      return 0xffffffff80004005;
    }
    if (param_3 != (double *)0x0) {
      *param_3 = *(double *)(puVar1 + 8);
    }
  }
  return 0;
}

