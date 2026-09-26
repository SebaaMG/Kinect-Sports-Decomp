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
extern unsigned int lbl_820ED0B8;
extern unsigned int lbl_820ED0C8;
extern unsigned int lbl_82154A38;
extern unsigned int lbl_82154A48;


undefined8 fn_82EE0320(int param_1,uint param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  
  if ((int)param_2 < 0x8002) {
    iVar6 = param_3;
    if ((0x7fff < (int)param_2) || (param_2 < 2)) goto LAB_82ee0430;
    if (param_2 == 2) goto LAB_82ee03b4;
    if (param_2 < 4) goto LAB_82ee03ac;
    if (param_2 == 4) goto LAB_82ee03a4;
    if (5 < param_2) {
      iVar6 = 0;
      if (param_2 != 6) goto LAB_82ee0430;
      goto LAB_82ee039c;
    }
  }
  else if (param_2 == 0x8002) {
LAB_82ee03b4:
    pbVar3 = (byte *)(param_1 + 0x10);
    pbVar4 = &lbl_820ED0B8;
    pbVar5 = pbVar3;
    do {
      bVar1 = *pbVar4;
      bVar2 = *pbVar5;
      if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
      pbVar4 = pbVar4 + 1;
      pbVar5 = pbVar5 + 1;
    } while (pbVar4 != &lbl_820ED0C8);
    if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) {
      pbVar5 = &lbl_82154A38;
      do {
        bVar1 = *pbVar5;
        bVar2 = *pbVar3;
        if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
        pbVar5 = pbVar5 + 1;
        pbVar3 = pbVar3 + 1;
      } while (pbVar5 != &lbl_82154A48);
      iVar6 = 4;
      if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) goto LAB_82ee0430;
    }
  }
  else {
    if (param_2 == 0x8003) {
LAB_82ee03ac:
      iVar6 = 4;
      goto LAB_82ee0430;
    }
    if (param_2 == 0x8004) {
LAB_82ee03a4:
      iVar6 = 8;
      goto LAB_82ee0430;
    }
    if (param_2 != 0x8005) {
      iVar6 = 0;
      if (param_2 != 0x8006) goto LAB_82ee0430;
LAB_82ee039c:
      iVar6 = 0x10;
      goto LAB_82ee0430;
    }
  }
  iVar6 = 2;
LAB_82ee0430:
  if ((param_3 != 0) && (param_3 != iVar6)) {
    return 0xffffffff80004005;
  }
  return 0;
}

