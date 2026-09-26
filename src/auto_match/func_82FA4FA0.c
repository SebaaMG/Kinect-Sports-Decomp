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
extern int fn_8306C068();
extern unsigned int lbl_83264208;
extern unsigned int lbl_83264210;
extern unsigned int lbl_83264214;
extern unsigned int uRam8326420c;


undefined8 fn_82FA4FA0(ulonglong param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  lbl_83264210 = fn_8306C068((param_1 + (param_1 & 0x3fffffff) * 4 & 0xfffffff) << 4);
  if (lbl_83264210 == 0) {
    uVar1 = 2;
  }
  else {
    iVar3 = (int)param_1;
    if (0 < iVar3) {
      iVar4 = 0;
      iVar2 = lbl_83264210;
      do {
        puVar5 = (undefined4 *)(iVar4 + iVar2);
        if (puVar5 != (undefined4 *)0x0) {
          RtlInitializeCriticalSection(puVar5 + 9);
          *puVar5 = 0;
          puVar5[1] = 0;
          puVar5[2] = 0;
          puVar5[3] = 0;
          puVar5[7] = 1;
          puVar5[0x10] = 0;
          puVar5[0x11] = 0;
          puVar5[0x12] = 0;
          puVar5[0x13] = 0;
          iVar2 = lbl_83264210;
        }
        param_1 = param_1 - 1;
        iVar4 = iVar4 + 0x50;
      } while (param_1 != 0);
    }
    uVar1 = 1;
    uRam8326420c = 0;
    lbl_83264214 = 1;
    lbl_83264208 = iVar3;
  }
  return uVar1;
}

