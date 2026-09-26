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
extern int fn_822314E8();
extern int fn_82248AE8();
extern int fn_82365BD8();
extern int fn_8251CF80();
extern unsigned int lbl_83265A54;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_82514888(uint *param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  uStack_40 = 0;
  uStack_3c = 0;
  lbl_83265A54 = 1;
  uStack_38 = 0;
  cVar2 = fn_82248AE8(&uStack_40,(int)(param_1[1] - *param_1) >> 3);
  if (cVar2 != '\0') {
    uVar1 = param_1[1];
    uVar4 = (ulonglong)uStack_40;
    if ((ulonglong)*param_1 != (ulonglong)uVar1) {
      lVar3 = *param_1 - uVar4;
      do {
        if ((uVar4 & 0xffffffff) != 0) {
          fn_82365BD8(uVar4,lVar3 + uVar4);
        }
        uVar4 = uVar4 + 8;
      } while ((lVar3 + uVar4 & 0xffffffff) != (ulonglong)uVar1);
    }
    uStack_3c = (undefined4)uVar4;
  }
  fn_8251CF80(0xffffffff8326597c,0,&uStack_40);
  fn_822314E8(param_1);
  return;
}

