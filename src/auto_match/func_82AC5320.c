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
extern int fn_82AC5088();
extern int fn_82AC5200();


undefined8
fn_82AC5320(ulonglong param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
             )

{
  uint uVar1;
  undefined8 uVar2;
  uint *puVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  
  if ((param_1 & 0xffffffff) == 0) {
LAB_82ac541c:
    uVar2 = 0;
  }
  else {
    if ((ulonglong)*(uint *)(param_2 + 0x44) <= (param_1 & 0xffffffff)) {
      uVar4 = (ulonglong)*(uint *)(param_2 + 0x48) + (ulonglong)*(uint *)(param_2 + 0x44);
      if ((param_1 & 0xffffffff) + 4 <= uVar4) {
        puVar3 = (uint *)param_1;
        uVar6 = (ulonglong)*puVar3;
        if ((uVar6 + (param_1 & 0xffffffff) + 4 <= uVar4) && (0x1b < uVar6)) {
          uVar4 = (ulonglong)puVar3[5];
          lVar8 = param_1 + 4;
          uVar1 = puVar3[4];
          if ((uVar4 <= uVar6) && ((ulonglong)uVar1 * 0x14 + (ulonglong)puVar3[5] <= uVar6)) {
            uVar2 = fn_82AC5088(lVar8,puVar3[2],uVar6,0xf0,param_5,uVar4,uVar6);
            if ((int)uVar2 < 0) {
              return uVar2;
            }
            uVar2 = fn_82AC5088(lVar8,puVar3[7]);
            if ((int)uVar2 < 0) {
              return uVar2;
            }
            lVar7 = uVar4 + lVar8;
            uVar5 = 0;
            if (uVar1 != 0) {
              do {
                uVar2 = fn_82AC5200(lVar7,lVar8,uVar6);
                if ((int)uVar2 < 0) {
                  return uVar2;
                }
                uVar5 = uVar5 + 1;
                lVar7 = lVar7 + 0x14;
              } while (uVar5 < uVar1);
            }
            goto LAB_82ac541c;
          }
        }
      }
    }
    uVar2 = 0xffffffff80004005;
  }
  return uVar2;
}

