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
#define TBLr 0
extern int fn_82CE8E78();
extern int fn_8309AF30();
extern int fn_8309B280();
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_82187B10;
extern unsigned int lbl_8323B4A0;


void fn_83097850(undefined8 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar3 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar3 + 4);
  if (puVar1 < *(undefined4 **)(iVar3 + 0xc)) {
    *puVar1 = &lbl_82187B10;
    uVar2 = TBLr;
    puVar1[1] = (int)uVar2;
    *(undefined4 **)(iVar3 + 4) = puVar1 + 3;
  }
  *(undefined4 *)(param_2 + 0x48) = 0;
  *(undefined4 *)(param_2 + 0x50) = 0;
  if (*(int *)(param_2 + 0x20) == 0) {
    fn_8309B280((double)*(float *)(param_2 + 0x38),(double)*(float *)(param_2 + 0x3c),
                    *(undefined4 *)(param_2 + 0x24),*(undefined4 *)(param_2 + 0x2c),
                    *(undefined4 *)(param_2 + 0x30),*(undefined4 *)(param_2 + 0x34));
  }
  else {
    fn_8309AF30(*(int *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x28),
                    *(undefined4 *)(param_2 + 0x2c),*(undefined4 *)(param_2 + 0x30),
                    *(undefined4 *)(param_2 + 0x34),param_2 + 0x50,*(undefined4 *)(param_2 + 0x4c),
                    *(undefined4 *)(param_2 + 0x40));
  }
  iVar3 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar3 + 4);
  if (puVar1 < *(undefined4 **)(iVar3 + 0xc)) {
    *puVar1 = &lbl_82132BC4;
    uVar2 = TBLr;
    puVar1[1] = (int)uVar2;
    *(undefined4 **)(iVar3 + 4) = puVar1 + 3;
  }
  fn_82CE8E78(param_1,param_2,param_2,0);
  return;
}

