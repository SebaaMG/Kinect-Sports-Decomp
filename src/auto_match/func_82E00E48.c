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
extern int fn_82CE6310();
extern int fn_82D9A420();
extern int fn_82D9A5F8();
extern unsigned int lbl_82057518;
extern unsigned int lbl_8214161C;
extern unsigned int lbl_82145C14;
extern unsigned int lbl_82145C24;
extern unsigned int lbl_821475E4;


undefined4 * fn_82E00E48(int param_1,int param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  
  iVar2 = fn_82CE5410();
  puVar3 = (undefined4 *)(**(code **)(**(int **)(iVar2 + 0x10) + 4))(*(int **)(iVar2 + 0x10),0x34);
  *(undefined2 *)((int)puVar3 + 6) = 1;
  *(undefined2 *)(puVar3 + 1) = 0x34;
  *(undefined1 *)(puVar3 + 2) = 0;
  *puVar3 = &lbl_821475E4;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0x80000000;
  *(undefined2 *)((int)puVar3 + 0x22) = 1;
  puVar3[9] = &lbl_8214161C;
  uVar1 = lbl_82057518;
  puVar3[7] = &lbl_82145C24;
  puVar3[9] = &lbl_82145C14;
  puVar3[0xb] = uVar1;
  puVar3[0xc] = uVar1;
  *(undefined1 *)(puVar3 + 2) = 0;
  *(undefined1 *)((int)puVar3 + 9) = 2;
  iVar2 = *(int *)(param_1 + 0x14);
  iVar4 = fn_82CE5410();
  if ((int)(puVar3[6] & 0x3fffffff) < iVar2) {
    iVar6 = (puVar3[6] & 0x3fffffff) << 1;
    if (iVar6 <= iVar2) {
      iVar6 = iVar2;
    }
    fn_82CE6310(*(undefined4 *)(iVar4 + 0x10),puVar3 + 4,iVar6,0x60);
  }
  puVar3[5] = iVar2;
  if (0 < iVar2) {
    uVar7 = 0;
    do {
      puVar5 = (undefined4 *)(uVar7 * 0x60 + puVar3[4]);
      puVar5[1] = *(undefined4 *)(*(int *)(param_1 + 0x10) + uVar7 * 0x60 + 4);
      fn_82CE4040();
      uVar1 = *(undefined4 *)(uVar7 * 4 + *param_3);
      *puVar5 = uVar1;
      fn_82CE4040(uVar1);
      iVar4 = param_1 + 0x24;
      if (param_1 == -0x1c) {
        iVar4 = 0;
      }
      fn_82D9A420(uVar1,iVar4);
      puVar5 = puVar3 + 9;
      if (puVar3 == (undefined4 *)0xffffffe4) {
        puVar5 = (undefined4 *)0x0;
      }
      fn_82D9A5F8(uVar1,puVar5);
      puVar3[10] = param_2 + 0x10;
      uVar7 = uVar7 + 1 & 0xff;
    } while ((int)uVar7 < iVar2);
  }
  puVar3[3] = *(undefined4 *)(param_1 + 0xc);
  puVar3[0xb] = *(undefined4 *)(param_1 + 0x2c);
  puVar3[0xc] = *(undefined4 *)(param_1 + 0x30);
  return puVar3;
}

