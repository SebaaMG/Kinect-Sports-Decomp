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
extern int fn_828B30E8();
extern int fn_828B3DF8();
extern int fn_82CE1210();


byte fn_828EB138(int param_1,undefined8 *param_2)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  int aiStack_30 [12];
  
  iVar1 = fn_82CE1210(*(undefined4 *)(param_1 + 0x70),*param_2,aiStack_30);
  bVar3 = aiStack_30[0] == 0;
  fn_828B3DF8(aiStack_30,param_1 + 0x5c,param_2);
  if (aiStack_30[0] == *(int *)(param_1 + 0x60)) {
    bVar2 = -(iVar1 != 0 || bVar3) & 2;
  }
  else if (iVar1 != 0 || bVar3) {
    bVar2 = 1;
  }
  else {
    fn_828B30E8(aiStack_30,param_1 + 0x5c);
    bVar2 = 0;
  }
  return bVar2;
}

