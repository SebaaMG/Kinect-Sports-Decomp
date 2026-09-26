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
extern int fn_82D9A420();
extern int fn_82DFA1C8();
extern unsigned int lbl_8212FC60;
extern unsigned int lbl_821475E4;


void fn_82E00B20(longlong param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  puVar3 = (undefined4 *)param_1;
  uVar6 = (ulonglong)(uint)puVar3[5];
  *puVar3 = &lbl_821475E4;
  if (0 < (int)puVar3[5]) {
    iVar4 = 0;
    do {
      iVar1 = puVar3[4];
      fn_82CE4118(((int *)(iVar4 + iVar1))[1]);
      iVar1 = *(int *)(iVar4 + iVar1);
      if ((*(short *)(puVar3 + 1) != 0) && (*(short *)(iVar1 + 4) != 0)) {
        lVar5 = param_1 + 0x24;
        if (param_1 == -0x1c) {
          lVar5 = 0;
        }
        fn_82D9A420(iVar1,lVar5);
      }
      fn_82CE4118(iVar1);
      uVar6 = uVar6 - 1;
      iVar4 = iVar4 + 0x60;
    } while (uVar6 != 0);
  }
  fn_82DFA1C8(param_1 + 0x1c);
  iVar4 = fn_82CE5410();
  piVar2 = *(int **)(iVar4 + 0x10);
  puVar3[5] = 0;
  if ((puVar3[6] & 0x80000000) == 0) {
    (**(code **)(*piVar2 + 0x10))(piVar2,puVar3[4],puVar3[6] & 0x3fffffff,0x60);
  }
  puVar3[4] = 0;
  puVar3[6] = 0x80000000;
  *puVar3 = &lbl_8212FC60;
  return;
}

