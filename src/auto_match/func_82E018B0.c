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
extern int fn_82CE4040();
extern int fn_82CE5410();
extern int fn_82D9A420();
extern int fn_82D9A5F8();
extern unsigned int lbl_8214161C;
extern unsigned int lbl_82145C14;
extern unsigned int lbl_82145C24;
extern unsigned int lbl_8214777C;


undefined4 * fn_82E018B0(longlong param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 *puVar4;
  
  iVar1 = fn_82CE5410();
  puVar2 = (undefined4 *)(**(code **)(**(int **)(iVar1 + 0x10) + 4))(*(int **)(iVar1 + 0x10),0x24);
  *(undefined2 *)((int)puVar2 + 6) = 1;
  *(undefined2 *)(puVar2 + 1) = 0x24;
  *(undefined1 *)(puVar2 + 2) = 0;
  *puVar2 = &lbl_8214777C;
  puVar2[3] = 0;
  puVar2[4] = 0;
  *(undefined2 *)((int)puVar2 + 0x1a) = 1;
  puVar2[7] = &lbl_8214161C;
  puVar2[5] = &lbl_82145C24;
  puVar2[7] = &lbl_82145C14;
  *(undefined1 *)(puVar2 + 2) = 0;
  *(undefined1 *)((int)puVar2 + 9) = 1;
  puVar2[4] = *(undefined4 *)*param_3;
  fn_82CE4040();
  lVar3 = param_1 + 0x1c;
  if (param_1 == -0x14) {
    lVar3 = 0;
  }
  fn_82D9A420(puVar2[4],lVar3);
  puVar4 = puVar2 + 7;
  if (puVar2 == (undefined4 *)0xffffffec) {
    puVar4 = (undefined4 *)0x0;
  }
  fn_82D9A5F8(puVar2[4],puVar4);
  puVar2[8] = param_2 + 0x10;
  puVar2[3] = *(undefined4 *)((int)param_1 + 0xc);
  return puVar2;
}

