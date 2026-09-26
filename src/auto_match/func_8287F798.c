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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
#define _fStack_28 ((*(U64*)&fStack_28))
extern unsigned int fStack_28;
extern int fn_8287D6D8();
extern int fn_8287F198();
extern int fn_828821A0();
extern int fn_82882218();
extern unsigned int stack0x0000001c;
extern unsigned int uStack0000001c;
extern unsigned int uStack_24;


void fn_8287F798(int param_1,undefined8 param_2)

{
  uint uVar1;
  float *pfVar2;
  float fVar3;
  char cVar4;
  float *pfVar5;
  float *pfVar6;
  undefined4 uStack0000001c;
  float afStack_30 [2];
  float fStack_28;
  uint uStack_24;
  
  uStack0000001c = (undefined4)param_2;
  cVar4 = fn_828821A0(param_2);
  if ((cVar4 == '\0') && (cVar4 = fn_82882218(param_2), cVar4 == '\0')) {
    fn_8287D6D8(afStack_30,param_1 + 0xf0,&stack0x0000001c);
    uVar1 = *(uint *)(param_1 + 0x114);
    pfVar6 = (float *)(param_1 + 0x94);
    pfVar2 = (float *)((int)afStack_30[0] + 0xac);
    afStack_30[0] = (float)uVar1;
    fVar3 = *(float *)(param_1 + 0x94) - *pfVar2;
    *(float *)(param_1 + 0x94) = fVar3;
    _fStack_28 = CONCAT44((float)uVar1,uVar1);
    pfVar5 = &fStack_28;
    pfVar2 = afStack_30;
    if ((float)uVar1 <= fVar3) {
      pfVar5 = pfVar6;
      pfVar2 = pfVar6;
    }
    if (*pfVar2 < *pfVar5) {
      pfVar5 = pfVar2;
    }
    *pfVar6 = *pfVar5;
    fn_8287F198(&fStack_28,param_1 + 0xf0);
  }
  return;
}

