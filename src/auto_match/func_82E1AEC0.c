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
extern int fn_82CE5338();
extern int fn_82CE5410();
extern int fn_82CEA160();
extern int fn_82CEA220();
extern int fn_82CEA280();
extern int fn_82E1AA80();


void fn_82E1AEC0(undefined8 param_1,int param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (0 < (int)param_3) {
    puVar4 = (undefined4 *)(param_2 + -0x18);
    do {
      iVar3 = puVar4[8];
      if (((iVar3 != 0) && (iVar2 = fn_82CEA220(param_4,iVar3), iVar2 <= *(int *)(param_4 + 8))) &&
         (iVar2 = fn_82CEA280(param_4,iVar3,0), iVar2 != 0)) {
        fn_82E1AA80(param_1,iVar3,1);
        iVar2 = fn_82CE5410();
        fn_82CEA160(param_4,*(undefined4 *)(iVar2 + 0x10),iVar3,0);
      }
      puVar4 = puVar4 + 6;
      uVar1 = *puVar4;
      iVar3 = fn_82CE5410();
      fn_82CE5338(*(undefined4 *)(iVar3 + 0x10),uVar1);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  iVar3 = fn_82CE5410();
  fn_82CE5338(*(undefined4 *)(iVar3 + 0x10),param_2);
  return;
}

