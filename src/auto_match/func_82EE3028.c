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
extern unsigned int lbl_82154B68;
extern unsigned int lbl_82154B78;


undefined8 fn_82EE3028(int param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    return 0xffffffffc00d36b6;
  }
  pbVar4 = &lbl_82154B68;
  pbVar3 = param_2;
  do {
    bVar1 = *pbVar4;
    bVar2 = *pbVar3;
    if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
    pbVar4 = pbVar4 + 1;
    pbVar3 = pbVar3 + 1;
  } while (pbVar4 != &lbl_82154B78);
  if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) {
    return 0xffffffff80070057;
  }
  *(undefined4 *)(param_1 + 0x174) = *(undefined4 *)param_2;
  *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 0x17c) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_2 + 0xc);
  return 0;
}

