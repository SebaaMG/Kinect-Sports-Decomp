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
extern int fn_82B806D8();
extern int fn_82B808B0();
extern int fn_82F65AC0();
extern int fn_82F6A3F0();
extern int fn_82F6B0C0();


undefined8
fn_82B81B40(undefined8 param_1,longlong param_2,longlong param_3,undefined4 *param_4,uint param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar2;
  longlong lVar1;
  char cVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 in_stack_00000054;
  undefined1 *in_stack_0000005c;
  char *apcStack_60 [24];
  
  uVar6 = 0;
  puVar5 = param_4;
  if (param_5 != 0) {
    do {
      iVar2 = fn_82F6B0C0(param_2,*puVar5,(uint)puVar5[1] >> 0x1c);
      if (iVar2 == 0) {
        param_4 = param_4 + uVar6 * 3;
        lVar1 = fn_82F6A3F0((ulonglong)((uint)param_4[1] >> 0x1c) + param_2,apcStack_60,10);
        if (*apcStack_60[0] != '\0') {
          if ((param_4[1] & 0x1c000) != 0) {
            return 0;
          }
          iVar2 = fn_82F65AC0(apcStack_60[0],0xffffffff820d3a94);
          if (iVar2 == 0) {
            uVar4 = 1;
          }
          else {
            iVar2 = fn_82F65AC0(apcStack_60[0],0xffffffff820d8938);
            if (iVar2 != 0) {
              return 0;
            }
            uVar4 = 0;
          }
          param_6 = fn_82B808B0(param_1,param_8,uVar4,param_6,param_7,param_3);
        }
        cVar3 = fn_82B806D8(param_1,param_4,lVar1 + param_3,param_2,param_8,in_stack_00000054);
        if (cVar3 == '\0') {
          return 0;
        }
        if (in_stack_0000005c != (undefined1 *)0x0) {
          *in_stack_0000005c = (char)param_6;
        }
        return 1;
      }
      uVar6 = uVar6 + 1;
      puVar5 = puVar5 + 3;
    } while (uVar6 < param_5);
  }
  return 0;
}

