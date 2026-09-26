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
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_825200A8();
extern int fn_825200F0();
extern int fn_827D6968();
extern unsigned int lbl_83265A24;


longlong fn_8257D9B8(undefined8 param_1,uint *param_2)

{
  char cVar3;
  ulonglong uVar1;
  int iVar2;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_30 [24];
  
  if ((param_2 != (uint *)0x0) &&
     (uVar5 = (ulonglong)*param_2, uVar5 != (uVar5 - 1) + (ulonglong)(uVar5 == 0))) {
    fn_825200F0(auStack_30);
    cVar3 = fn_827D6968(lbl_83265A24,auStack_30,0xffffffffffffffff);
    if (cVar3 != '\0') {
      uVar1 = fn_8251F720(param_2,0);
      uVar5 = uVar1;
      if (uVar1 != 0) {
        lVar4 = 0;
        do {
          iVar2 = fn_825200A8(param_1);
          if (iVar2 != 0) goto code_r0x8257da60;
          lVar4 = lVar4 + 1;
          uVar1 = -(ulonglong)(*(int *)((int)uVar1 + 4) != 0) & uVar1 + 4;
        } while ((uVar1 & 0xffffffff) != 0);
      }
      lVar4 = -1;
code_r0x8257da60:
      lVar4 = (lVar4 + 1) - (lVar4 + (ulonglong)(lVar4 + 1 == 0));
      if ((uVar5 & 0xffffffff) == 0) {
        return lVar4;
      }
      fn_8251FA58(uVar5);
      return lVar4;
    }
  }
  return 0;
}

