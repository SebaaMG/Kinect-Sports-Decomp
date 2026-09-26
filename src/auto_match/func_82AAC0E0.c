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
extern U64 storeVectorElementByteIndexed();
extern V16 vectorAddSignedHalfWordSaturate();
extern V16 vectorPackSignedHalfWordUnsignedSaturate();
extern void *memcpy(void *, const void *, unsigned int);


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82AAC0E0(int *param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5)

{
  int iVar2;
  undefined1 uVar3;
  longlong lVar1;
  int iVar4;
  longlong lVar5;
  undefined1 in_vs32 [16];
  undefined1 auVar6 [16];
  undefined1 in_vs43 [16];
  undefined1 in_vs45 [16];
  undefined1 in_vs62 [16];
  
  if (0 < (int)param_5) {
    do {
      if (0 < (int)param_4) {
        iVar4 = 0;
        lVar1 = param_2;
        lVar5 = param_4;
        do {
          altv300_21(in_vs62,in_vs43);{ V16 _vt0 = vectorAddSignedHalfWordSaturate(in_vs32,in_vs45); memcpy(auVar6, &_vt0, 16); }{ V16 _vt1 = vectorPackSignedHalfWordUnsignedSaturate(auVar6,auVar6); memcpy(in_vs32, &_vt1, 16); }
          uVar3 = storeVectorElementByteIndexed(in_vs32,0,lVar1);
          *(undefined1 *)lVar1 = uVar3;
          iVar2 = *(short *)(*param_1 + iVar4) + 0x80;
          if (iVar2 < 0x100) {
            if (iVar2 < 0) {
              uVar3 = 0;
            }
            else {
              uVar3 = (undefined1)iVar2;
            }
          }
          else {
            uVar3 = 0xff;
          }
          ((undefined1 *)lVar1)[1] = uVar3;
          lVar1 = lVar1 + 2;
          iVar4 = iVar4 + 2;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
      param_5 = param_5 + -1;
      param_2 = param_2 + param_3;
      *param_1 = *param_1 + (int)param_4 * 2;
    } while (param_5 != 0);
  }
  return;
}

