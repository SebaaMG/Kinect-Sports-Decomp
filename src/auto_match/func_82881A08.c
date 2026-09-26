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
extern int fn_8289F160();
extern int fn_828EA790();
extern unsigned int iStack_30;
extern unsigned int lbl_83212A04;
extern unsigned int uRam831599f8;
extern unsigned int uRam83212a10;
extern unsigned int uRam83212a14;


ulonglong fn_82881A08(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iStack_30;
  int aiStack_2c [11];
  
  if ((uRam83212a14 & 1) == 0) {
    uRam83212a14 = uRam83212a14 | 1;
    uVar5 = 0x7fffffff;
    uRam83212a10 = 0x7fffffff;
  }
  else {
    uVar5 = (ulonglong)uRam83212a10;
  }
  uVar6 = -(ulonglong)(uVar5 != (ulonglong)uRam831599f8 + 1) & (ulonglong)uRam831599f8 + 1;
  aiStack_2c[0] = (int)uVar6;
  fn_8289F160(&iStack_30,0xffffffff83212a00,aiStack_2c);
  iVar2 = lbl_83212A04;
  iVar3 = (int)uVar6;
  if (iStack_30 != lbl_83212A04) {
    fn_828EA790(&iStack_30);
    while (iStack_30 != iVar2) {
      uVar1 = *(uint *)(iStack_30 + 0xc);
      uVar4 = uVar6 + 1;
      if ((uVar4 & 0xffffffff) < (ulonglong)uVar1) {
        if ((int)uVar4 != -1) {
          uRam831599f8 = (int)uVar4;
          return uVar4;
        }
        break;
      }
      fn_828EA790(&iStack_30);
      uVar6 = (ulonglong)uVar1;
    }
    if ((int)uVar6 == (int)uVar5) {
      uVar6 = 0xffffffffffffffff;
      uRam831599f8 = -1;
      iVar3 = uRam831599f8;
    }
    else {
      uVar6 = uVar6 + 1;
      iVar3 = (int)uVar6;
    }
  }
  uRam831599f8 = iVar3;
  return uVar6;
}

