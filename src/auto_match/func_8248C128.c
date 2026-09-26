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
extern unsigned int *auStack_30;
extern unsigned int *auStack_48;
extern int fn_822315A0();
extern int fn_82365BD8();
extern int fn_8248C708();
extern int fn_8265C9E0();
extern unsigned int iStack_2c;
extern unsigned int iStack_50;
extern unsigned int lbl_821BEA60;
extern unsigned int lbl_821C0DB8;
extern unsigned int uRam831c6308;
extern unsigned int uStack_24;
extern unsigned int uStack_28;


ulonglong fn_8248C128(int param_1)

{
  int iVar1;
  ulonglong uVar2;
  int iStack_50;
  undefined4 *puStack_4c;
  undefined1 auStack_48 [8];
  undefined **appuStack_40 [4];
  undefined1 auStack_30 [4];
  int iStack_2c;
  uint uStack_28;
  undefined4 uStack_24;
  
  if ((ulonglong)*(uint *)(param_1 + 0x40) !=
      (longlong)(*(int *)(param_1 + 0x34) - *(int *)(param_1 + 0x30) >> 5)) {
    iVar1 = *(int *)(param_1 + 0x14);
    if (*(int *)(iVar1 + 8) == *(int *)(iVar1 + 0xc)) {
      puStack_4c = (undefined4 *)fn_8265C9E0(0x10);
      if (puStack_4c == (undefined4 *)0x0) {
        puStack_4c = (undefined4 *)0x0;
      }
      else {
        puStack_4c[1] = 1;
        puStack_4c[2] = 1;
        *puStack_4c = &lbl_821C0DB8;
        puStack_4c[3] = 0;
      }
    }
    else {
      fn_82365BD8(&iStack_50,(ulonglong)*(uint *)(iVar1 + 0xc) - 0xc);
      uStack_28 = uRam831c6308;
      if (iStack_50 != 0) {
        uVar2 = (ulonglong)uRam831c6308;
        uRam831c6308 = uRam831c6308 + 1;
        iVar1 = fn_82365BD8(auStack_48,&iStack_50);
        appuStack_40[0] = &lbl_821BEA60;
        fn_82365BD8(auStack_30,iVar1);
        uStack_24 = 0;
        if (*(int *)(iVar1 + 4) != 0) {
          fn_822315A0();
        }
        fn_8248C708(param_1 + 0x30,appuStack_40);
        if (iStack_2c != 0) {
          fn_822315A0();
        }
        if (puStack_4c == (undefined4 *)0x0) {
          return uVar2;
        }
        fn_822315A0();
        return uVar2;
      }
    }
    if (puStack_4c != (undefined4 *)0x0) {
      fn_822315A0(puStack_4c);
    }
  }
  return 0xffffffffffffffff;
}

