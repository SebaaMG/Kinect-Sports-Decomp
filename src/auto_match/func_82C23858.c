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
extern unsigned int *auStack_40;
extern int fn_82C10F40();
extern int fn_82C10F68();
extern int fn_82C10FD0();
extern int fn_82C11038();
extern int fn_82C11CB8();
extern unsigned int uStack_38;


ulonglong fn_82C23858(int param_1,int param_2,byte *param_3,int *param_4)

{
  byte bVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined1 auStack_40 [4];
  undefined1 *puStack_3c;
  undefined4 uStack_38;
  int aiStack_34 [13];
  
  if (*param_4 == 0) {
    if (param_2 == 0x20050) {
      bVar1 = *param_3;
      uStack_38 = 0;
      puStack_3c = (undefined1 *)0x0;
      uVar3 = fn_82C10F40(*(undefined4 *)(param_1 + 0x94),bVar1,aiStack_34);
      if ((-1 < (int)uVar3) &&
         (*(undefined4 *)(aiStack_34[0] + 100) = *(undefined4 *)(param_3 + 4),
         0 < *(short *)(*(int *)(param_1 + 4) + 0x48))) {
        uVar3 = fn_82C10F68(*(undefined4 *)(param_1 + 0x94),&uStack_38,&puStack_3c,auStack_40);
        if ((uVar3 & 0xffffffff) != 0x80500016) {
          if ((int)uVar3 < 0) {
            return uVar3;
          }
          do {
            if ((int)uVar3 < 0) {
              return uVar3;
            }
            if ((*(int *)(puStack_3c + 0x50) != 0) &&
               (uVar2 = 1 << ((uint)bVar1 + ((int)(uint)bVar1 >> 5) * -0x20 & 0x3f),
               (*(uint *)(puStack_3c + ((bVar1 >> 5) + 0x15) * 4) & uVar2) == uVar2)) {
              *(undefined4 *)(puStack_3c + 100) = *(undefined4 *)(aiStack_34[0] + 100);
              uVar3 = fn_82C11CB8(*(undefined4 *)(puStack_3c + 100),*puStack_3c,puStack_3c + 0x54,
                                    *(undefined4 *)(puStack_3c + 0x40));
              if ((int)uVar3 < 0) {
                return uVar3;
              }
            }
            uVar3 = fn_82C10FD0(*(undefined4 *)(param_1 + 0x94),uStack_38,&puStack_3c,auStack_40);
          } while ((uVar3 & 0xffffffff) != 0x80500016);
        }
        uVar3 = fn_82C11038(*(undefined4 *)(param_1 + 0x94),uStack_38);
        uVar3 = -(ulonglong)(uVar3 != 0xffffffff80500016) & uVar3;
      }
    }
    else {
      uVar3 = 0xffffffff805000b2;
    }
  }
  else {
    uVar3 = 0;
    if (param_2 == 0x20030) {
      *(undefined4 *)(param_1 + 0xe4) = 0;
      if (param_4[1] < 0) {
        *(undefined4 *)(param_1 + 0xe8) = 1;
        uVar3 = (ulonglong)(uint)param_4[1];
      }
      else {
        *(undefined4 *)(param_1 + 0xb4) = 0;
      }
    }
  }
  return uVar3;
}

