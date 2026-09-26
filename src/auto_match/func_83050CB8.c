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
extern int fn_82A1E968();
extern int fn_83050528();
extern int fn_83055CF0();
extern int fn_83055EE8();
extern unsigned int lbl_821AAD20;


char fn_83050CB8(double param_1,int param_2,uint param_3,int param_4,ulonglong param_5,
                  char param_6,char param_7,undefined8 param_8,undefined4 *param_9)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  ulonglong uVar4;
  int iVar5;
  
  *param_9 = 0;
  uVar1 = *(uint *)(param_2 + 0x74);
  *(float *)(param_2 + 0x98) = (float)param_1;
  *(int *)(param_2 + 0x90) = param_4;
  *(undefined4 *)(param_2 + 0x94) = 0;
  *(uint *)(param_2 + 0x74) = (param_3 & 1) << 0x1d | uVar1 & 0xdfffffff;
  *(char *)(param_2 + 0x70) = param_7;
  if ((((param_4 == 0) || (param_7 < '\0')) || ('d' < param_7)) || (param_1 < (double)lbl_821AAD20))
  {
    cVar3 = '\x1f';
  }
  else {
    if ((*(uint *)(param_2 + 0x9c) & 0x1e000000) != 0x4000000) {
      uVar2 = *(uint *)(param_2 + 0x6c);
      uVar4 = (ulonglong)uVar2;
      trapWord(6,uVar4,0);
      if (param_5 == (longlong)(int)((param_5 & 0xffffffff) / uVar4) * (longlong)(int)uVar2) {
        if (((*(ulonglong *)(param_2 + 0x18) - *(ulonglong *)(param_2 + 0x88) <
              (param_5 & 0xffffffff)) && ((uVar1 & 0x4000000) != 0)) && ((param_3 & 0xff) == 0)) {
          trapWord(6,uVar4,0);
          param_5 = (longlong)
                    (int)(((((*(ulonglong *)(param_2 + 0x18) & 0xffffffff) -
                            (*(ulonglong *)(param_2 + 0x88) & 0xffffffff)) + uVar4) - 1 & 0xffffffff
                          ) / (ulonglong)uVar2) * (longlong)(int)uVar2;
        }
        *(int *)(param_2 + 0x68) = (int)param_5;
        if ((param_5 & 0xffffffff) == 0) {
          *param_9 = 0;
          return '\x01';
        }
        fn_82A1E968(param_2 + 0x58);
        iVar5 = param_2 + 0x38;
        if (param_6 != '\0') {
          RtlEnterCriticalSection(iVar5);
          fn_83055CF0(param_2);
          fn_83050528(param_2,2);
          RtlLeaveCriticalSection(iVar5);
          fn_83055EE8(*(undefined4 *)(param_2 + 0x60),param_2);
          uVar1 = *(uint *)(param_2 + 0x9c);
          *param_9 = *(undefined4 *)(param_2 + 0x94);
          return ((uVar1 & 0x1e000000) != 0x2000000) + '\x01';
        }
        RtlEnterCriticalSection(iVar5);
        fn_83050528(param_2,2);
        RtlLeaveCriticalSection(iVar5);
        *param_9 = *(undefined4 *)(param_2 + 0x94);
        return '\x01';
      }
    }
    cVar3 = '\x02';
  }
  return cVar3;
}

