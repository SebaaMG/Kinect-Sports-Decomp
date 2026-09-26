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
extern int fn_829D47B0();
extern int fn_829E19A8();
extern int fn_82A28E60();
extern int fn_82A2B2F0();
extern int fn_8314212C();
extern unsigned int *lbl_832179FC;


void fn_829D5110(void)

{
  int iVar2;
  longlong lVar1;
  undefined4 *puVar3;
  int *piVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  int aiStack_40 [16];
  
  if (((lbl_832179FC[0x23d35] & 1) != 0) && (fn_829D47B0(aiStack_40,0xaf000), aiStack_40[0] != 0))
  {
    iVar2 = fn_829E19A8(lbl_832179FC + 0x9268,aiStack_40[0],0xaf000);
    if (iVar2 < 0) {
      fn_82A2B2F0(0xffffffff82057520);
      fn_82A28E60(lbl_832179FC[0x23d33],0,aiStack_40[0]);
      return;
    }
    fn_82A28E60(lbl_832179FC[0x23d33],0,aiStack_40[0]);
    lVar1 = XamNuiIdentityGetSessionId();
    if (lVar1 == *(longlong *)(lbl_832179FC + 0x926a)) {
      puVar3 = lbl_832179FC + 0x9260;
      RtlEnterCriticalSection(puVar3);
      uVar5 = 0;
      piVar4 = lbl_832179FC + 0xc798;
      puVar6 = lbl_832179FC;
      do {
        if ((piVar4[4] != 0) &&
           ((iVar2 = fn_8314212C(uVar5,puVar6 + 3), -1 < iVar2 ||
            ((lbl_832179FC[0x23d35] & 0x40) != 0)))) {
          *puVar6 = 1;
          puVar6[1] = puVar6[1] | 1;
          puVar6[2] = (uint)(*piVar4 != 0);
        }
        uVar5 = uVar5 + 1;
        puVar6 = puVar6 + 6;
        piVar4 = piVar4 + 0x3534;
      } while ((uVar5 & 0xffffffff) < 8);
      RtlLeaveCriticalSection(puVar3);
      return;
    }
  }
  fn_82A2B2F0(0xffffffff82057520,0);
  return;
}

