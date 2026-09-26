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
extern unsigned int *auStack_3c;
extern int fn_82953B18();
extern int fn_829548C8();
extern int fn_8295D0A8();
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


undefined8 fn_8295F4B0(int *param_1)

{
  bool bVar1;
  uint uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint uVar5;
  int *piVar6;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 auStack_3c [15];
  
  uVar2 = *(uint *)param_1[0x41] & 0xfffff;
  uVar3 = (**(code **)(*param_1 + 0x130))(param_1,4);
  uVar3 = fn_8295D0A8(param_1,uVar3);
  if ((((-1 < (int)uVar3) &&
       (uVar3 = (**(code **)(*param_1 + 0x140))
                          (param_1,*(undefined4 *)
                                    (**(int **)(param_1[0x41] + 0x10) * 4 + param_1[5]),&uStack_50,
                           &uStack_44,&uStack_48), -1 < (int)uVar3)) &&
      (uVar3 = (**(code **)(*param_1 + 0x144))
                         (param_1,*(undefined4 *)(param_1[0x41] + 0x10),uVar2,&uStack_4c,uStack_48),
      -1 < (int)uVar3)) &&
     (uVar3 = (**(code **)(*param_1 + 0x138))(param_1,uStack_50,uStack_4c,uStack_44),
     -1 < (int)uVar3)) {
    uVar5 = 0;
    do {
      piVar6 = (int *)(uVar5 * uVar2 * 4 + ((uint *)param_1[0x41])[2]);
      if ((uVar5 != 1) || (bVar1 = true, (*(uint *)param_1[0x41] & 0xfff00000) != 0x70400000)) {
        bVar1 = false;
      }
      uVar3 = (**(code **)(*param_1 + 0x148))
                        (param_1,*(undefined4 *)(*piVar6 * 4 + param_1[5]),&uStack_50,&uStack_40);
      if ((int)uVar3 < 0) {
        return uVar3;
      }
      uVar3 = (**(code **)(*param_1 + 0x14c))(param_1,piVar6,uVar2,uStack_4c,auStack_3c);
      if ((int)uVar3 < 0) {
        return uVar3;
      }
      if (bVar1) {
        uVar4 = fn_82953B18(uStack_50);
      }
      else {
        uVar4 = (ulonglong)uStack_50;
      }
      uVar3 = (**(code **)(*param_1 + 0x13c))(param_1,uVar4,auStack_3c[0],uStack_40);
      if ((int)uVar3 < 0) {
        return uVar3;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 3);
    uVar3 = (**(code **)(*param_1 + 0x134))(param_1);
    if ((-1 < (int)uVar3) && (uVar3 = fn_829548C8(param_1), -1 < (int)uVar3)) {
      uVar3 = 0;
    }
  }
  return uVar3;
}

