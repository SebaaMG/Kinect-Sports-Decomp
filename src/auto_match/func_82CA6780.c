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
extern int fn_82C4E5E8();
extern int fn_82CA4F58();


undefined8 fn_82CA6780(int param_1,uint *param_2)

{
  ulonglong *puVar1;
  undefined1 uVar3;
  undefined8 uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  if (*(uint *)(param_1 + 0xfc4) == 0) {
    if (*(int *)(param_1 + 0x1dc) == 0) {
      uVar3 = fn_82CA4F58(param_1,0);
      *(undefined1 *)(param_2 + 1) = uVar3;
    }
    else {
      puVar1 = *(ulonglong **)(param_1 + 0x54);
      uVar7 = 1;
      lVar6 = 0;
      uVar4 = (ulonglong)*(uint *)(puVar1 + 1);
      uVar5 = uVar4 + 0x10;
      if ((uVar5 & 0xffffffff) == 0) {
        do {
          if ((uVar5 & 0xffffffff) == 0) break;
          uVar7 = uVar7 - uVar5;
          *(int *)(puVar1 + 1) = (int)(uVar4 - uVar5);
          lVar6 = (ulonglong)(uint)((int)(*puVar1 >> (0x40 - uVar5 & 0x7f)) << ((uint)uVar7 & 0x3f))
                  + lVar6;
          *puVar1 = *puVar1 << (uVar5 & 0x7f);
          if ((longlong)(uVar4 - uVar5) < 0) {
            fn_82C4E5E8(puVar1);
          }
          uVar4 = (ulonglong)*(uint *)(puVar1 + 1);
          uVar5 = uVar4 + 0x10;
        } while ((uVar5 & 0xffffffff) < (uVar7 & 0xffffffff));
      }
      uVar5 = *puVar1;
      *(int *)(puVar1 + 1) = (int)(uVar4 - uVar7);
      *puVar1 = uVar5 << (uVar7 & 0x7f);
      if ((longlong)(uVar4 - uVar7) < 0) {
        fn_82C4E5E8(puVar1);
      }
      if (((uVar5 >> (0x40 - uVar7 & 0x7f) & 0xffffffff) + lVar6 & 0xffffffff) == 0) {
        *(char *)(param_2 + 1) =
             (char)*(undefined4 *)(param_1 + 0xf8) * '\x02' + (char)*(undefined4 *)(param_1 + 0xfc)
             + -1;
      }
      else {
        *(char *)(param_2 + 1) = (char)*(undefined4 *)(param_1 + 0xfcc) * '\x02' + -1;
      }
    }
  }
  else if ((*param_2 >> 0xc & *(uint *)(param_1 + 0xfc4) & 0xf) == 0) {
    *(char *)(param_2 + 1) =
         (char)*(undefined4 *)(param_1 + 0xf8) * '\x02' + (char)*(undefined4 *)(param_1 + 0xfc) + -1
    ;
  }
  else {
    *(char *)(param_2 + 1) = (char)*(undefined4 *)(param_1 + 0xfcc) * '\x02' + -1;
  }
  if ((*(byte *)(param_2 + 1) == 0) || (uVar2 = 0, 0x3e < *(byte *)(param_2 + 1))) {
    uVar2 = 1;
  }
  return uVar2;
}

