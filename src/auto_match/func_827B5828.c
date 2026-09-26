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
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;


void fn_827B5828(double param_1,undefined8 param_2,int param_3,int param_4,int param_5,
                  longlong param_6,uint param_7,undefined8 param_8,longlong param_9)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  double dVar5;
  
  if (param_1 != (double)lbl_82002AE0) {
    uVar3 = 0;
    if (param_7 != 0) {
      dVar5 = (double)lbl_82002C5C;
      do {
        if ((int)param_6 != 0) {
          puVar1 = (undefined1 *)
                   ((uVar3 + param_5) * *(int *)(param_3 + 0x14) + param_4 +
                    *(int *)(param_3 + 0x18) + -1);
          lVar4 = param_6;
          do {
            uVar2 = (ulonglong)
                    (uint)(int)((double)(longlong)(int)((uint)(byte)puVar1[1] - (int)param_9) *
                                param_1 + dVar5) + param_9;
            uVar2 = ((uVar2 & 0xffffffff) >> 0x1f) - 1 & uVar2;
            if (0xff < (int)uVar2) {
              uVar2 = 0xff;
            }
            puVar1 = puVar1 + 1;
            *puVar1 = (char)uVar2;
            lVar4 = lVar4 + -1;
          } while (lVar4 != 0);
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < param_7);
    }
  }
  return;
}

