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
extern int fn_82CE9978();
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B4A0;


/* WARNING: Removing unreachable block (ram,0x82ce8ee4) */
/* WARNING: Removing unreachable block (ram,0x82ce8f08) */
/* WARNING: Removing unreachable block (ram,0x82ce8f44) */
/* WARNING: Removing unreachable block (ram,0x82ce8f3c) */
/* WARNING: Removing unreachable block (ram,0x82ce8f48) */

undefined8 fn_82CE90F8(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int iVar4;
  undefined8 uVar3;
  
  iVar4 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar4 + 4);
  if (puVar1 < *(undefined4 **)(iVar4 + 0xc)) {
    *puVar1 = "TtGetNextJob";
    uVar3 = TBLr;
    puVar1[1] = (int)uVar3;
    *(undefined4 **)(iVar4 + 4) = puVar1 + 3;
  }
  do {
    RtlEnterCriticalSection(param_1);
    uVar3 = fn_82CE9978(param_1,0xffffffffffffffff,*(undefined4 *)(param_1 + 0x1c),param_3,
                            param_2);
  } while ((int)uVar3 == -1);
  iVar4 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar4 + 4);
  if (puVar1 < *(undefined4 **)(iVar4 + 0xc)) {
    *puVar1 = &lbl_82132BC4;
    uVar2 = TBLr;
    puVar1[1] = (int)uVar2;
    *(undefined4 **)(iVar4 + 4) = puVar1 + 3;
  }
  return uVar3;
}

