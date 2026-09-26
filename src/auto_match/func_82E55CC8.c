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
extern int fn_82E50CB8();
extern int fn_82E50F10();
extern unsigned int lbl_82153858;
extern unsigned int lbl_82153868;
extern unsigned int lbl_82153878;


undefined8 fn_82E55CC8(int param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  pbVar4 = (byte *)&lbl_82153858;
  pbVar3 = param_2;
  do {
    bVar1 = *pbVar4;
    bVar2 = *pbVar3;
    if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
    pbVar4 = pbVar4 + 1;
    pbVar3 = pbVar3 + 1;
  } while (pbVar4 != &lbl_82153868);
  if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) {
    pbVar4 = &lbl_82153868;
    pbVar3 = param_2;
    do {
      bVar1 = *pbVar4;
      bVar2 = *pbVar3;
      if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
      pbVar4 = pbVar4 + 1;
      pbVar3 = pbVar3 + 1;
    } while (pbVar4 != &lbl_82153878);
    if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) {
      return 0xffffffff80070057;
    }
  }
  fn_82E50CB8(param_1 + 8);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)param_2;
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0xc);
  fn_82E50F10(param_1 + 8);
  return 0;
}

