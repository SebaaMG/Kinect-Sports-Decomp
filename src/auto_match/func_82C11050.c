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
extern unsigned int *auStack_28;
extern int fn_82C10B28();
extern int fn_82C10F68();
extern unsigned int stack0x00000014;
extern unsigned int uStack00000014;
extern unsigned int uStack_2c;


undefined8 fn_82C11050(uint param_1)

{
  uint uVar1;
  int iVar3;
  ulonglong uVar2;
  ulonglong uVar4;
  longlong lVar5;
  uint uStack00000014;
  byte abStack_30 [4];
  undefined4 uStack_2c;
  undefined4 auStack_28 [10];
  
  uStack_2c = 0;
  auStack_28[0] = 0;
  abStack_30[0] = 0;
  uStack00000014 = param_1;
  iVar3 = fn_82C10F68(param_1,&uStack_2c,auStack_28,abStack_30);
  if (iVar3 != -0x7fafffea) {
    uVar4 = (ulonglong)abStack_30[0];
    while (uVar1 = uStack00000014, -1 < iVar3) {
      uVar2 = (ulonglong)uStack00000014;
      if (*(code **)(uStack00000014 + 0x208) != (code *)0x0) {
        (**(code **)(uStack00000014 + 0x208))
                  (uVar2,*(undefined4 *)((int)(uVar4 << 2) + uStack00000014),uVar4,
                   *(undefined4 *)(uStack00000014 + 0x20c));
      }
      lVar5 = uVar4 * 4 + uVar2;
      iVar3 = fn_82C10B28(*(undefined4 *)(uVar1 + 0x1fc),2,lVar5);
      if (-1 < iVar3) {
        *(undefined4 *)lVar5 = 0;
      }
      uVar4 = (ulonglong)*(byte *)(uStack00000014 + 0x200);
      while( true ) {
        if (0x7e < uVar4) goto LAB_82c1113c;
        if (*(int *)((int)(uVar4 << 2) + uStack00000014) != 0) break;
        uVar4 = uVar4 + 1 & 0xff;
      }
      *(char *)(uStack00000014 + 0x200) = (char)(uVar4 + 1);
      iVar3 = 0;
    }
  }
LAB_82c1113c:
  *(undefined1 *)(uStack00000014 + 0x200) = 0;
  fn_82C10B28(*(undefined4 *)(uStack00000014 + 0x1fc),2,&stack0x00000014);
  return 0;
}

