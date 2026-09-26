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
extern unsigned int lbl_8202E618;
extern unsigned int lbl_8202E628;
extern unsigned int lbl_8214C020;
extern unsigned int lbl_8214C030;
extern unsigned int lbl_8214C040;


undefined8 fn_82E3AF20(undefined8 param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  pbVar3 = (byte *)&lbl_8202E618;
  pbVar4 = param_2;
  do {
    bVar1 = *pbVar3;
    bVar2 = *pbVar4;
    if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
    pbVar3 = pbVar3 + 1;
    pbVar4 = pbVar4 + 1;
  } while (pbVar3 != &lbl_8202E628);
  if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
    return 3;
  }
  pbVar3 = &lbl_8214C020;
  pbVar4 = param_2;
  do {
    bVar1 = *pbVar3;
    bVar2 = *pbVar4;
    if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
    pbVar3 = pbVar3 + 1;
    pbVar4 = pbVar4 + 1;
  } while (pbVar3 != &lbl_8214C030);
  if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
    return 1;
  }
  pbVar4 = &lbl_8214C030;
  do {
    bVar1 = *pbVar4;
    bVar2 = *param_2;
    if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
    pbVar4 = pbVar4 + 1;
    param_2 = param_2 + 1;
  } while (pbVar4 != &lbl_8214C040);
  if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) {
    return 2;
  }
  return 2;
}

