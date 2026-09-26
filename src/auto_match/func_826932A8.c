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
extern int fn_82693008();
extern int fn_82693078();
extern int fn_82693208();


undefined8 fn_826932A8(longlong param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  if ((param_3 & 0xffffffff) != (param_4 & 0xffffffff)) {
    puVar2 = (undefined4 *)param_1;
    if ((param_4 & 0xffffffff) < (param_3 & 0xffffffff)) {
      uVar1 = ((param_2 + param_4) - 1 & 0xffffffff) >> 0x14;
      uVar4 = ((param_2 + param_3) - 1 & 0xffffffff) >> 0x14;
      uVar6 = uVar1 + 1;
      if (uVar6 <= uVar4) {
        lVar5 = uVar6 * 8 + param_1 + 4;
        do {
          cVar3 = fn_82693008(lVar5,*puVar2);
          if (cVar3 == '\0') {
            uVar6 = uVar6 - 1;
            if (uVar1 < (uVar6 & 0xffffffff)) {
              lVar7 = uVar6 - uVar1;
              lVar5 = (uVar6 & 0x1fffffff) * 8 + param_1 + 4;
              do {
                fn_82693078(lVar5,*puVar2);
                lVar7 = lVar7 + -1;
                lVar5 = lVar5 + -8;
              } while (lVar7 != 0);
            }
            return 0;
          }
          uVar6 = uVar6 + 1;
          lVar5 = lVar5 + 8;
        } while ((uVar6 & 0xffffffff) <= uVar4);
      }
      fn_82693208(param_1,param_2 + param_4,param_3 - param_4,
                    *(undefined4 *)
                     (*(int *)((int)puVar2 + ((uint)param_2 >> 0x11 & 0x7ff8) + 4) +
                     ((uint)((param_2 & 0xffffffff) >> 10) & 0x3fc)));
    }
    else {
      uVar1 = ((param_2 + param_4) - 1 & 0xffffffff) >> 0x14;
      uVar4 = (((param_2 + param_3) - 1 & 0xffffffff) >> 0x14) + 1;
      if (uVar4 <= uVar1) {
        lVar7 = (uVar1 - uVar4) + 1;
        lVar5 = uVar4 * 8 + param_1 + 4;
        do {
          fn_82693078(lVar5,*puVar2);
          lVar7 = lVar7 + -1;
          lVar5 = lVar5 + 8;
        } while (lVar7 != 0);
      }
    }
  }
  return 1;
}

