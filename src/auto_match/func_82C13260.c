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
extern int fn_82C038C8();
extern unsigned int lbl_820ED018;
extern unsigned int lbl_820ED028;


undefined8 fn_82C13260(longlong *param_1)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  int aiStack_80 [4];
  byte abStack_70 [112];
  
  aiStack_80[0] = 0;
  if (param_1 == (longlong *)0x0) {
    uVar3 = 2;
  }
  else {
    iVar4 = fn_82C038C8(param_1,*param_1,0x1e,aiStack_80);
    if (iVar4 == 0x1e) {
      pbVar5 = abStack_70;
      pbVar6 = (byte *)&lbl_820ED018;
      *param_1 = *param_1 + 0x1e;
      do {
        bVar1 = *pbVar6;
        bVar2 = *pbVar5;
        if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
        pbVar6 = pbVar6 + 1;
        pbVar5 = pbVar5 + 1;
      } while (pbVar6 != &lbl_820ED028);
      if ((((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) &&
          (*(char *)(aiStack_80[0] + 0x1c) == '\x01')) &&
         (*(char *)(aiStack_80[0] + 0x1d) == '\x02')) {
        *(uint *)(param_1 + 2) =
             (((uint)*(byte *)(aiStack_80[0] + 0x13) * 0x100 + (uint)*(byte *)(aiStack_80[0] + 0x12)
              ) * 0x100 + (uint)*(byte *)(aiStack_80[0] + 0x11)) * 0x100 +
             (uint)*(byte *)(aiStack_80[0] + 0x10);
        uVar3 = 0;
      }
      else {
        uVar3 = 4;
      }
    }
    else {
      uVar3 = 3;
    }
  }
  return uVar3;
}

