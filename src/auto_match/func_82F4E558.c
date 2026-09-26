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
extern int fn_829D2750();
extern int fn_829DA858();
extern int fn_82A1DD38();
extern int fn_82F4E0D0();
extern unsigned int lbl_821655B4;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_8326183C;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82F4E558(double param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  
  if (*(int *)(lbl_8326183C + 0x2058) != *(int *)(lbl_8326183C + 0x15a8)) {
    RtlEnterCriticalSection(lbl_8326183C + 0x2b0c);
    fn_82A1DD38(lbl_8326183C + 0x15a0,lbl_8326183C + 0x2050,0xab0);
    RtlLeaveCriticalSection(lbl_8326183C + 0x2b0c);
    fn_82A1DD38(lbl_8326183C + 0xaf0,lbl_8326183C + 0x15a0,0xab0);
    if ((*(uint *)(lbl_8326183C + 0x2b28) >> 2 & 1) != 0) {
      fn_829D2750(lbl_8326183C + 0x15a0,lbl_8326183C + 0x2b34);
    }
    if (*(int *)(lbl_8326183C + 0x2dc8) != 0) {
      iVar3 = 0;
      iVar4 = 0x2dcc;
      dVar5 = (double)lbl_821AAD20;
      iVar2 = lbl_8326183C;
      do {
        iVar1 = iVar3 + iVar2;
        if (*(int *)(iVar1 + 0x15d0) == 2) {
          if ((*(int *)(iVar1 + 0x15d8) == -1) &&
             ((*(int *)(iVar2 + 0x2dc8) == 0 || (lbl_821655B4 <= *(float *)(iVar2 + 0x2de8))))) {
            *(float *)(iVar4 + iVar2) = (float)dVar5;
            iVar1 = fn_829DA858(*(undefined4 *)(iVar1 + 0x15d4),0,0xffffffff82f4e218,
                                    iVar4 + iVar2);
            iVar2 = lbl_8326183C;
            if (iVar1 == -0x7ffffff6) {
              RtlEnterCriticalSection(lbl_8326183C + 0x2dec);
              iVar2 = lbl_8326183C + 0x2dec;
              *(int *)(lbl_8326183C + 0x2de4) = *(int *)(lbl_8326183C + 0x2de4) + 1;
              RtlLeaveCriticalSection(iVar2);
              iVar2 = lbl_8326183C;
            }
          }
          if (*(int *)(iVar3 + iVar2 + 0x15d8) == -4) {
            *(float *)(iVar4 + iVar2) = (float)(param_1 + (double)*(float *)(iVar4 + iVar2));
          }
        }
        iVar4 = iVar4 + 4;
        iVar3 = iVar3 + 0x1c0;
      } while (iVar4 < 0x2de4);
      RtlEnterCriticalSection(iVar2 + 0x2dec);
      iVar2 = lbl_8326183C;
      if (*(int *)(lbl_8326183C + 0x2de4) == 0) {
        *(float *)(lbl_8326183C + 0x2de8) =
             (float)((double)*(float *)(lbl_8326183C + 0x2de8) + param_1);
      }
      else {
        *(float *)(lbl_8326183C + 0x2de8) = (float)dVar5;
      }
      RtlLeaveCriticalSection(iVar2 + 0x2dec);
    }
    fn_82F4E0D0(lbl_8326183C + 0x15a0);
    fn_82A1DD38(lbl_8326183C + 0x40,lbl_8326183C + 0x15a0,0xab0);
    iVar2 = 0;
    iVar3 = 0;
    do {
      (**(code **)(*(int *)(iVar2 + lbl_8326183C + 0x2b58) + 4))
                (iVar2 + lbl_8326183C + 0x2b58,iVar3 + lbl_8326183C + 0x70);
      iVar3 = iVar3 + 0x1c0;
      iVar2 = iVar2 + 0x30;
    } while (iVar3 < 0xa80);
  }
  return;
}

