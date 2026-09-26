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
extern unsigned int *auStack_80;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_a8;
extern unsigned int *auStack_b8;
extern unsigned int lbl_83219B8C;
extern unsigned int lbl_83219C4C;
extern unsigned int uStack_90;
extern unsigned int uStack_94;
extern unsigned int uStack_98;


ulonglong fn_82A1F9D0(undefined4 param_1,longlong *param_2,int param_3,undefined4 *param_4)

{
  bool bVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lStack_c0;
  undefined1 auStack_b8 [8];
  longlong lStack_b0;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined1 auStack_80 [32];
  longlong lStack_60;
  
  uStack_98 = 0xfffffffd;
  uStack_90 = 0x40;
  uStack_94 = param_1;
  uVar3 = (**(code **)(lbl_83219B8C + 0xc))
                    (param_4,0xffffffffc0100000,&uStack_98,auStack_a8,0,0,0,(param_3 != 0) + '\x02')
  ;
  if ((uVar3 & 0xc0000000) != 0xc0000000) {
    do {
      if (lbl_83219C4C != 0) {
        NtClose(*param_4);
        return 0xffffffffc0000240;
      }
      uVar2 = *param_4;
      lVar4 = *param_2;
      uVar3 = NtQueryInformationFile(uVar2,auStack_a0,auStack_80,0x38,0x22);
      if ((uVar3 & 0xc0000000) != 0xc0000000) {
        lVar4 = lVar4 - lStack_60;
        bVar1 = 0x1000000 < lVar4;
        if (bVar1) {
          lVar4 = 0x1000000;
        }
        lStack_c0 = lStack_60 + lVar4;
        lStack_60 = lStack_c0;
        uVar3 = NtSetInformationFile(uVar2,auStack_b8,&lStack_c0,8,0x14);
        if (-1 < (int)uVar3) {
          lStack_b0 = lStack_60;
          uVar3 = NtSetInformationFile(uVar2,auStack_b8,&lStack_b0,8,0x13);
        }
        if (((uVar3 & 0xc0000000) != 0xc0000000) && (bVar1)) {
          uVar3 = 0x105;
        }
      }
    } while ((int)uVar3 == 0x105);
    if ((uVar3 & 0xc0000000) == 0xc0000000) {
      NtClose(*param_4);
      *param_4 = 0xffffffff;
    }
  }
  return uVar3;
}

