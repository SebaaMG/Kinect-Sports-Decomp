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
extern unsigned int *auStack_30;
extern int fn_8265C990();
extern int fn_829C9790();
extern int fn_829CADB8();
extern int fn_829D0440();
extern int fn_829D23A0();
extern int fn_829D2710();
extern int fn_829D6EF0();
extern int fn_82A1E210();
extern int fn_82F691F0();
extern int fn_8314293C();
extern int iRam83215010;
extern int iRam83217200;
extern unsigned int lbl_83214FFC;
extern unsigned int lbl_83215000;
extern unsigned int lbl_83215018;
extern unsigned int lbl_8321501C;
extern unsigned int lbl_83217128;
extern unsigned int lbl_83217140;
extern unsigned int lbl_832171C8;
extern unsigned int lbl_83217238;
extern unsigned int uRam8321500c;
extern unsigned int uRam83215014;


void fn_829CB5B0(void)

{
  longlong lVar1;
  int *piVar2;
  undefined8 auStack_30 [6];
  
  XamXStudioRequest(0x302,0);
  fn_82A1E210();
  fn_829D23A0();
  if (iRam83215010 != 0) {
    RtlEnterCriticalSection(0xffffffff8315c428);
    lbl_83215018 = 1;
    sync(0);
    NtSetEvent(uRam83215014,0);
    KeSetEvent(0xffffffff83215034,1,0);
    RtlLeaveCriticalSection(0xffffffff8315c428);
    if ((lbl_83215000 & 0x8000000) == 0) {
      auStack_30[0] = 0xffffffffff676980;
    }
    else {
      auStack_30[0] = 0xfffffffe9a5f4400;
    }
    KeWaitForSingleObject(iRam83215010,3,0,0,auStack_30);
    ObDereferenceObject(iRam83215010);
    iRam83215010 = 0;
    uRam8321500c = 0;
    RtlEnterCriticalSection(0xffffffff8315c428);
    RtlLeaveCriticalSection(0xffffffff8315c428);
  }
  fn_829D6EF0();
  if (lbl_8321501C != 0) {
    lbl_8321501C = 0;
  }
  fn_829CADB8();
  fn_829C9790();
  if (lbl_832171C8 != 0) {
    fn_8265C990(lbl_832171C8,0xffffffffac9c0000);
    lbl_832171C8 = 0;
  }
  if (iRam83217200 != 0) {
    fn_8265C990(iRam83217200,0xffffffffac9c0000);
    iRam83217200 = 0;
  }
  if (lbl_83217238 != 0) {
    fn_8265C990(lbl_83217238,0xffffffffac9c0000);
    lbl_83217238 = 0;
  }
  lVar1 = 6;
  piVar2 = &lbl_83217128;
  do {
    fn_829D0440(*piVar2,1);
    if (*piVar2 != 0) {
      ObDereferenceObject();
    }
    lVar1 = lVar1 + -1;
    piVar2 = piVar2 + 1;
  } while (lVar1 != 0);
  if (lbl_83217140 != 0) {
    ObDereferenceObject();
    lbl_83217140 = 0;
  }
  NtClose(uRam83215014);
  uRam83215014 = 0;
  fn_8314293C(0xffffffff832170e8);
  fn_829D2710();
  lbl_83214FFC = 0;
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(0xffffffff83215000,0,0x28e0);
}

