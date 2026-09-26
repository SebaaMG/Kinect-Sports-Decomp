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
extern int fn_82CE4118();
extern int fn_82CE5410();
extern int fn_82CED5B8();
extern int fn_82DBFAA8();
extern unsigned int lbl_8212FC60;
extern unsigned int lbl_8213A6EC;


void fn_82D96538(undefined4 *param_1)

{
  ushort uVar1;
  ushort *puVar2;
  ushort *puVar3;
  undefined4 uVar4;
  int iVar5;
  
  *param_1 = &lbl_8213A6EC;
  fn_82DBFAA8();
  if (param_1[5] != 0) {
    fn_82CE4118();
  }
  if (param_1[6] != 0) {
    fn_82CE4118();
  }
  puVar2 = (ushort *)param_1[4];
  if (puVar2 != (ushort *)0x0) {
    uVar1 = *puVar2;
    while (0x16 < uVar1) {
      puVar3 = *(ushort **)(puVar2 + 10);
      uVar1 = puVar2[8];
      iVar5 = fn_82CE5410();
      (**(code **)(**(int **)(iVar5 + 0x10) + 8))(*(int **)(iVar5 + 0x10),puVar2,uVar1);
      puVar2 = puVar3;
      uVar1 = *puVar3;
    }
  }
  if (param_1[3] != 0) {
    fn_82CE4118();
  }
  fn_82CED5B8(param_1 + 10);
  uVar1 = *(ushort *)((int)param_1 + 0x26);
  if ((uVar1 & 0x8000) == 0) {
    uVar4 = param_1[8];
    iVar5 = fn_82CE5410();
    (**(code **)(**(int **)(iVar5 + 0x10) + 8))
              (*(int **)(iVar5 + 0x10),uVar4,((ulonglong)uVar1 & 0x3fff) << 2);
  }
  *param_1 = &lbl_8212FC60;
  return;
}

