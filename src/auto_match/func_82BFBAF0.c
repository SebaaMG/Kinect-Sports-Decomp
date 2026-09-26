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
extern int fn_82A277E0();
extern int fn_82A28E60();
extern int fn_82A2A360();
extern U64 storeDoubleWordConditionalIndexed();
extern U64 storeWordConditionalIndexed();


void fn_82BFBAF0(int param_1,undefined8 param_2,ulonglong param_3)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  char cVar8;
  byte bVar9;
  uint *puStack_30;
  
  while( true ) {
    plVar5 = (longlong *)param_2;
    lVar7 = *plVar5;
    puStack_30 = (uint *)((ulonglong)lVar7 >> 0x20);
    if (puStack_30 == (uint *)0x0) break;
    sync(1);
    cVar8 = '\x01';
    lVar6 = *plVar5;
    if (lVar6 == lVar7) {
      lVar2 = storeDoubleWordConditionalIndexed
                        (((ulonglong)*puStack_30 << 0x20) + (lVar7 + 1U & 0x7fffffff),0,param_2);
      *plVar5 = lVar2;
    }
    else {
      lVar2 = storeDoubleWordConditionalIndexed(lVar6,0,param_2);
      *plVar5 = lVar2;
    }
    bVar9 = 2;
    if (lVar6 == lVar7) {
      uVar1 = puStack_30[1];
      if (param_1 == 0) {
        uVar4 = fn_82A2A360();
        if (((param_3 & 0xffffffff) != 0) &&
           (lVar7 = fn_82A277E0(uVar4,0,uVar1), 0 < (int)lVar7)) {
          do {
            if (cVar8 != '\0') {
              uVar3 = storeWordConditionalIndexed((ulonglong)*(uint *)param_3 - lVar7,0,param_3);
              *(uint *)param_3 = uVar3;
              bVar9 = 2;
            }
          } while (!(bool)(bVar9 >> 1 & 1));
        }
        uVar4 = fn_82A2A360();
        fn_82A28E60(uVar4,0,uVar1);
      }
      else {
        (**(code **)(param_1 + 0xc))(*(undefined4 *)(param_1 + 4),uVar1);
      }
    }
  }
  return;
}

