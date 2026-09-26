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
#define CONCAT22(h,l) ((U32)((((U16)(h)) << 16) | ((U16)(l))))
extern int fn_83037510();
extern int fn_83037590();
extern int fn_83047D88();
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_44;


undefined8 fn_8303A030(int param_1,undefined4 *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  if ((((*(byte *)(param_1 + 0x4d) < 3) || (cVar1 = *(char *)(param_1 + 0x4c), cVar1 == '\b')) ||
      (cVar1 == '\t')) || ((cVar1 == '\n' || (bVar2 = true, cVar1 == '\v')))) {
    bVar2 = false;
  }
  if (bVar2) {
    puVar4 = &uStack_44;
    puVar5 = param_2 + -1;
    lVar6 = 10;
    do {
      puVar5 = puVar5 + 1;
      puVar4 = puVar4 + 1;
      *puVar4 = *puVar5;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    uVar3 = fn_83037510(&uStack_40,*(undefined2 *)(param_2 + 3),param_2[1]);
    if ((int)uVar3 != 1) {
      return uVar3;
    }
    uStack_34 = CONCAT22((((U64)(uStack_34) >> 0) & 0xFFFF),*(undefined2 *)((int)param_2 + 0xe));
    fn_83047D88(param_2,&uStack_40,param_1);
    fn_83037590(param_2);
    *param_2 = uStack_40;
    param_2[1] = uStack_3c;
    param_2[2] = uStack_38;
    param_2[3] = uStack_34;
  }
  return 1;
}

